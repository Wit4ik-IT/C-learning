#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int b = 125;
	void* ptr1 = &b;
	int* ptr2 = (int*)ptr1;
	printf("Original: %d\n", b);
	printf("With void pointer: %d", *ptr2);
	return 0;
}