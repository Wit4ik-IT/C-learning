#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum, digit;
int sum_digits(int num)
{

	digit = num % 10;
	sum = sum + digit;

	if (num == 0)
	{
		return sum;
	}
	sum_digits(num / 10);

}

int main()
{
	int num = 0;
	printf("Enter your positive number: ");
	if (scanf("%d", &num) != 1)
	{
		printf("ERROR: wrong input\n");
		return 1;
	}
	if (num < 0)
	{
		printf("ERROR: negative numbers not allowed\n");
		return 1;
	}
	int result = sum_digits(num);
	printf("Sum of digits: %d\n", result);
	return 0;

}