#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int a, b;
	printf("Enter your two numbers: ");
	if (scanf("%d %d", &a, &b) != 2)
	{
		printf("ERROR: wrong input\n");
		return 1;
	}
	//printf("Swap: %d %d\n", a, b);
	int* pa, * pb;
	pa = &a;
	pb = &b;
	swap(pa, pb);
	printf("Swap: %d %d\n", a, b);
	return 0;
}