#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum_digits(int num)
{
	int sum = 0;
	int digit = 0;
	while (num != 0)
	{
		digit = num % 10;
		num = num / 10;
		sum += digit;
	}
	return sum;
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