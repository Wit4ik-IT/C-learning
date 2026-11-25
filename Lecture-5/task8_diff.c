#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 6
int main()
{
	char arr[SIZE] = "Hello";
	char* ptr = "World";
	printf("Before array: %s\nBefore pointer: %s\n", arr, ptr);
	*(arr + 1) = 'a';
	ptr = "C language";
	printf("\n");
	printf("After array: %s\nAfter pointer: %s\n", arr, ptr);
	return 0;
}