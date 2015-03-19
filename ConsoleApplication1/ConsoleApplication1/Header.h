
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int getDec(int *binVal, int binSz)
{
	double decVal = 0;
	for (int i = 0; i < binSz; i++)
	{
		if (binVal[i] == 1)
		{
			decVal += pow(2.0, i);
		}
	}

	int num = (int)decVal;
	return num;
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