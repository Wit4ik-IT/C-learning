#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a, int b);

int sum(int a, int b)
{
	int c = a + b;
	return c;
}

int main() 
{
	int a = 0, b = 0;
	printf("Enter your numbers: ");
	if (scanf("%d %d", &a, &b) == 0)
	{
		printf("ERROR: wrong input");
		return 1;
	}
	int result = sum(a, b);
	printf("Sum is: %d", result);

	return 0;
}