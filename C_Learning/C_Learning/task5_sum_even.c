#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, sum = 0;
	printf("Summ of even numbers from 0 to your number\n");
	printf("Enter your whole positive number: \n");
	if (scanf("%d", &num) != 1)
	{
		printf("Oops, invalid input");
		return 1;
	}
	for (num; num != 0; num--)
	{
		if (num % 2 != 0)
		{
			continue;
		}
		sum += num;
	}
	printf("Sum of even numbers: %d\n", sum);
	return 0;
}