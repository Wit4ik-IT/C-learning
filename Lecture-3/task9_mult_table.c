#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, mult;
	printf("Enter your number\n");
	if (scanf("%d", &num) != 1)
	{
		printf("ERROR: wrong input\n");
		return 1;
	}
	if (num < 1 || num > 10)
	{
		printf("ERROR: number between 1 and 10\n");
		return 1;
	}
	printf("\n");
	for (int i = 1; i <= 10; i++)
	{
		mult = num * i;
		printf("%d x %d = %d\n", num, i, mult);
	}

	return 0;
}