// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
//
/**********************************/


#include "stdafx.h"
#include <bitset>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <math.h>
#include <fstream>

using namespace std;

#define MAX 128
#define N 2
#define M 4
int index[MAX][MAX];
int exIndex[MAX][MAX];
char codeStream[MAX*MAX*N * 12];
char s[MAX*MAX*N];
char exS[MAX*MAX*N];
int sIndex = 0;
char vqName[100];
void encodeMessage(int vqVals[MAX][MAX]);
void decodeMessage();
void getBin(int num, int bits, char *binVal);
int getDec(int *, int);
void printStats(int sIndex, int bitcount, int c1, int c2, int c3, int c4);
void checkSecret();
void checkIndex();


int _tmain(int argc, _TCHAR* argv[])
{

	FILE *vqindex, *sFile;
	fopen_s(&sFile, "S5.txt", "r");

	int c, I, i, j;
	std::string vqs[] = {
		"256\\ITtxt\\LenaIT.txt",
		"256\\ITtxt\\PeppersIT.txt",
		"256\\ITtxt\\BaboonIT.txt",
		"256\\ITtxt\\BoatsIT.txt",
		"256\\ITtxt\\JetF16IT.txt",
		"256\\ITtxt\\TiffanyIT.txt",
		"256\\ITtxt\\GoldHillIT.txt"
	};

	const char *vq;
	// do for each vqindex file stored in array
	for (int k = 0; k < 7; k++)
	{
		vq = vqs[k].c_str();
		
		strcpy_s(vqName, vq);
		fopen_s(&vqindex, vq, "r");
		printf("\n%s\n", vq);

		//read vqindex into an array
		for (i = 0; i < MAX; i++)
		{
			for (j = 0; j < MAX; j++)
			{
				c = fscanf_s(vqindex, "%d", &I);
				if (c != EOF)
				{
					index[i][j] = I;
				}
			}
		}

		//read secret message into an array
		int size = MAX *MAX *N;
		//char sval = ' ';

		char ch;

		for (i = 0; i < size; i++)
		{
			c = fscanf_s(sFile, "%c ", &ch, 1);
			if (c != EOF)
			{
				s[i] = ch;
			}

		}
		encodeMessage(index);
		fclose(vqindex);
		decodeMessage();
		checkSecret();
		checkIndex();

		memset(index, 0, MAX*MAX);
	}


	fclose(sFile);
	return 0;
}


void encodeMessage(int vqVals[MAX][MAX])
{
	char bVal[10];
	int  x, d, u, l, t, g, len = 0, seedCnt = 0, secretInx = 0, bitcount = 0;
	double scount = 0.0;
	char b1, b2;
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

	memset(codeStream, '\0', MAX*MAX*N * 12);
	for (int i = 0; i < MAX; i++)
	{
		getBin(index[0][i], 8, bVal);
		seedCnt++;
		len = strlen(codeStream);
		for (int j = 0; j < 8; j++)
		{
			codeStream[len++] = bVal[j];
			bitcount++;
		}
	}

	for (int j = 1; j < MAX; j++)
	{

		getBin(index[j][0], 8, bVal);
		seedCnt++;
		len = strlen(codeStream);
		for (int i = 0; i < 8; i++)
		{
			codeStream[len++] = bVal[i];
			bitcount++;
		}
	}

	for (int i = 1; i < MAX; i++)
	{
		for (int j = 1; j < MAX; j++)
		{
			b1 = s[secretInx++];
			b2 = s[secretInx++];

			x = index[i][j];
			u = index[i - 1][j];
			l = index[i][j - 1];
			t = index[i - 1][j - 1];

			if (b1 == '0' && b2 == '0')
			{
				d = u - x;
			}
			else if (b1 == '0' && b2 == '1')
			{
				d = l - x;

			}
			else if (b1 == '1' && b2 == '0')
			{
				d = t - x;

			}
			else if (b1 == '1' && b2 == '1')
			{

				g = (u + l + t) / 3;
				d = g - x;

			}

			int m = M;
			if (d == 0)
			{
				len = strlen(codeStream);

				codeStream[len++] = b1;
				codeStream[len++] = b2;
				codeStream[len++] = '0';
				codeStream[len++] = '0';
				codeStream[len++] = '\0';

				bitcount += 4.0;
				c1 += 1;
			}
			else if (abs(d) > pow(2, m) - 1)
			{

				len = strlen(codeStream);

				codeStream[len++] = b1;
				codeStream[len++] = b2;
				codeStream[len++] = '0';
				codeStream[len++] = '1';
				codeStream[len++] = '\0';

				getBin(x, 8, bVal);
				strcat_s(codeStream, bVal);
				bitcount += 12.0;
				c2 += 1;

			}
			else if (-(pow(2, m) - 1) <= d && d < 0)
			{
				len = strlen(codeStream);

				codeStream[len++] = b1;
				codeStream[len++] = b2;
				codeStream[len++] = '1';
				codeStream[len++] = '0';
				codeStream[len++] = '\0';

				getBin(abs(d), m, bVal);
				strcat_s(codeStream, bVal);
				bitcount = bitcount + m + 4;
				c3 += 1;
			}
			else if (0 < d && d <= (pow(2, m) - 1))
			{
				len = strlen(codeStream);

				codeStream[len++] = b1;
				codeStream[len++] = b2;
				codeStream[len++] = '1';
				codeStream[len++] = '1';
				codeStream[len++] = '\0';

				getBin(d, m, bVal);
				strcat_s(codeStream, bVal);
				bitcount = bitcount + m + 4;
				c4 += 1;
			}

		}
	}
	sIndex = secretInx;
	printStats(sIndex, strlen(codeStream), c1, c2, c3, c4);
}

void printStats(int sIndex, int bitcount, int c1, int c2, int c3, int c4)
{
	FILE *output,*caseComp;
	fopen_s(&output, "Results.csv", "a");
	fopen_s(&caseComp, "Case Comparison.csv", "a");
	fprintf_s(caseComp, "\n%s,Case 1,Case 2,Case 3,Case 4,\n",vqName);
	fprintf_s(caseComp, " ,%d,%d,%d,%d,\n", c1, c2, c3, c4);
	double er = 0.0, cr = 0.0;
	er = sIndex / (128.0*128.0);
	cr = bitcount / (512.0 * 512.0);
	fprintf_s(output, "\n%s,\n", vqName);
	fprintf_s(output, "\nm,n,Secret Bits,Total Bits,Embedding Rate,Compression Rate,\n");
	fprintf_s(output, "%d,%d,%d,%d,%f,%f,\n",M,N,sIndex,bitcount,er,cr);
	fprintf_s(output, "\nCase 1,Case 2,Case 3,Case 4,");
	fprintf_s(output, "\n%d,%d,%d,%d,\n", c1, c2, c3, c4);

	/*printf("\nM=%d\nN=2\nSecret Bits: %d\n", M, sIndex);
	printf("Total Bits: %d\n", bitcount);
	printf("Embedding Rate: %.3f\n", er);
	printf("Compression Rate: %.3f\n", cr);
	printf("Case1:%d\nCase2:%d\nCase3:%d\nCase4:%d\n", c1, c2, c3, c4);
	*/
	fclose(output); 
	fclose(caseComp);
}
void decodeMessage()
{
	const int size = (MAX + (MAX - 1)) * 8;
	int s = 0, binval[8], decVal = 0;
	char seedArea[size + 1], cbits[5], c1, c2, b1, b2;

	//Extract Seed Area
	int k = 0, binSz = 8;
	for (int i = 0; i < MAX; i++)
	{

		for (int indx = 7; indx >= 0; indx--)
		{
			if (codeStream[k] == '1')
			{
				binval[indx] = 1;
			}
			else if (codeStream[k] == '0')
			{
				binval[indx] = 0;
			}
			k++;
		}
		decVal = getDec(binval, binSz);//TODO convert from bin -> dec and insert into vq index
		exIndex[0][i] = decVal;
	}

	for (int j = 1; j < MAX; j++)
	{
		for (int indx = 7; indx >= 0; indx--)
		{
			if (codeStream[k] == '1')
			{
				binval[indx] = 1;
			}
			else if (codeStream[k] == '0')
			{
				binval[indx] = 0;
			}
			k++;
		}
		decVal = getDec(binval, binSz);//TODO convert from bin -> dec and insert into vq index
		exIndex[j][0] = decVal;
	}

	int x, u, l, t, g, d;


	for (int i = 1; i < MAX; i++)
	{
		for (int j = 1; j < MAX; j++)
		{
			u = exIndex[i - 1][j];
			l = exIndex[i][j - 1];
			t = exIndex[i - 1][j - 1];
			g = (u + l + t) / 3;
			//Extract encoded message  
			//	while (k != strlen(codeStream))
			//	{
			b1 = codeStream[k++];
			b2 = codeStream[k++];
			c1 = codeStream[k++];
			c2 = codeStream[k++];
			exS[s++] = b1;
			exS[s++] = b2;

			if (c1 == '0' && c2 == '0')
			{
				d = 0;

				if (b1 == '0' &&b2 == '0')
				{
					x = u - d;
				}
				else if (b1 == '0'&& b2 == '1')
				{
					x = l - d;
				}
				else if (b1 == '1'&& b2 == '0')
				{
					x = t - d;
				}
				else if (b1 == '1'&& b2 == '1')
				{
					x = g - d;
				}
				exIndex[i][j] = x;
			}
			else if (c1 == '0' && c2 == '1')
			{
				int de;
				binSz = 8;
				for (int indx = binSz - 1; indx >= 0; indx--)
				{
					if (codeStream[k] == '1')
					{
						binval[indx] = 1;
					}
					else if (codeStream[k] == '0')
					{
						binval[indx] = 0;
					}
					k++;
				}
				de = getDec(binval, binSz);
				x = de;
				exIndex[i][j] = x;
			}
			else if (c1 == '1' && c2 == '0')
			{
				binSz = M;
				for (int indx = binSz - 1; indx >= 0; indx--)
				{
					if (codeStream[k] == '1')
					{
						binval[indx] = 1;
					}
					else if (codeStream[k] == '0')
					{
						binval[indx] = 0;
					}
					k++;
				}
				d = getDec(binval, binSz);
				d = -d;

				if (b1 == '0' && b2 == '0')
				{
					x = u - d;
				}
				else if (b1 == '0'&& b2 == '1')
				{
					x = l - d;
				}
				else if (b1 == '1'&& b2 == '0')
				{
					x = t - d;
				}
				else if (b1 == '1'&& b2 == '1')
				{
					x = g - d;
				}

				exIndex[i][j] = x;
			}
			else if (c1 == '1' && c2 == '1')
			{
				binSz = M;
				for (int indx = binSz - 1; indx >= 0; indx--)
				{
					if (codeStream[k] == '1')
					{
						binval[indx] = 1;
					}
					else if (codeStream[k] == '0')
					{
						binval[indx] = 0;
					}
					k++;
				}
				d = getDec(binval, binSz);
				if (b1 == '0' && b2 == '0')
				{
					x = u - d;
				}
				else if (b1 == '0'&& b2 == '1')
				{
					x = l - d;
				}
				else if (b1 == '1'&& b2 == '0')
				{
					x = t - d;
				}
				else if (b1 == '1'&& b2 == '1')
				{
					x = g - d;
				}

				exIndex[i][j] = x;
			}

			//}

		}
	}


}


void getBin(int num, int bits, char * bVal)
{
	int rem = 0, i = 1, size = 0;
	char pad[10];
	while (num != 0)
	{
		rem += (num % 2)*i;
		num = num / 2;
		i *= 10;
	}
	_itoa_s(rem, bVal, 10, 10);
	size = strnlen(bVal, 10);
	strcpy_s(pad, bVal);

	char newPad[10];
	strcpy_s(newPad, "0");

	while (size < bits)
	{

		strcat_s(newPad, pad);

		strcpy_s(pad, newPad);
		strcpy_s(newPad, "0");

		size = strnlen(pad, 10);
	}
	strcpy_s(bVal, 10, pad);
}

int getDec(int *binVal, int binSz)
{
	double decVal = 0;
	for (int i = 0; i < binSz; i++)
	{
		if (binVal[i] == 1)
		{
			decVal += pow(2, i);
		}
	}
	return decVal;
}

void checkSecret()
{
	int sizeInit = strlen(s);
	int match = 1;
	for (int i = 0; i < sIndex; i++)
	{
		if (s[i] != exS[i])
		{
			printf("%c %c %d\n", s[i], exS[i], i);
			match = 0;
			break;
		}
	}

	if (match == 1)
	{
		printf("Message extracted successfully!\n");

	}
	else
	{
		printf("Message not extracted successfully\n");
	}
}

void checkIndex()
{

	int match = 1;
	for (int i = 0; i < MAX; i++)
	{
		for (int j = 0; j < MAX; j++)
		{
			if (index[i][j] != exIndex[i][j])
			{
				match = 0;
				break;
			}
		}
	}

	if (match == 1)
	{
		printf("VQIndex extracted successfully!\n");

	}
	else
	{
		printf("VQIndex not extracted successfully\n");
	}
}