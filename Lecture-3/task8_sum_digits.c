#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, sum = 0;
	printf("Enter your number: \n");
	if (scanf("%d", &num) != 1)
	{
		printf("Error: wrong input");
		return 1;
	}
	if (num < 1)
	{
		printf("Error: need positive number, greather than 1\n");
		return 1;
	}
	while (num != 0)
	{
		sum = sum + num % 10;
		num = num / 10;
	}
	printf("%d\n", sum);
	return 0;
}