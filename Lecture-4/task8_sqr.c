#define _CRT_SECURE_NO_WARNINGS
#define SQUARE(x) ((x) * (x))
#include <stdio.h>

int main()
{
	int x, sqr;
	printf("Enter your number: ");
	if (scanf("%d", &x) != 1)
	{
		printf("ERR");
		return 1;
	}
	sqr = SQUARE(x);
	printf("Result: %d", sqr);
	return 0;
}