
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
	return decVal;
}