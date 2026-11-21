#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max(int a, int b, int c);

int max(int a, int b, int c)
{
	int m;
	if (a >= b)
	{
		m = a;
	}
	else
		m = b;
	if (m >= c)
	{
		return m;
	}
	else
		return c;
}

int main()
{
	int a = 0, b = 0, c = 0;
	printf("Max of three\nEnter three numbers: ");
	if (scanf("%d %d %d", &a, &b, &c) == 0)
	{
		printf("ERROR: wrong input");
		return 1;
	}
	int result = max(a, b, c);
	printf("Max is: %d", result);


	return 0;
}