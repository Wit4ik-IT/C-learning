#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	printf("Even or odd?\nEnter your number:\n");
	if (scanf("%d", &num) != 1)
	{
		printf("Oops, invalid input\n");
		return 1;
	}
	if (num % 2 == 0)
	{
		printf("Your number is even\n");
	}
	else
	{
		printf("Your number is odd\n");
	}
	return 0;
}