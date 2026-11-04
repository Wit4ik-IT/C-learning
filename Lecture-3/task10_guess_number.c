#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int nummy = 37, numpl;
	do
	{
		printf("Guess the number: ");
		if (scanf("%d", &numpl) != 1)
		{
			printf("ERROR: wrong input\n");
			return 1;
		}
		if (numpl == nummy)
		{
			printf("Correct!\n");
			return 0;
		}
		if (numpl < nummy)
		{
			printf("Too low\n");
		}
		if (numpl > nummy)
		{
			printf("Too high\n");
		}
		printf("\n");
	} while (nummy != numpl);
	return 0;
}