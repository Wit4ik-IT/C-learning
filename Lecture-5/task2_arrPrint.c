#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5


void print_array(int* arr, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%d ", *(arr + i));
	}
}

int main()
{
	int arr[SIZE];
	int count = SIZE;
	int* pa = arr;
	int i = 0;
	printf("Six-seven (^_^)\nFive numbers print\n");


	while (i < SIZE)
	{
		printf("Enter your %d number: ", i + 1);
		if (scanf("%d", (pa + i)) != 1)
		{
			printf("ERROR: wrong input\n");
			return 1;
		}
		i++;
	}
	print_array(pa, count);
	return 0;
}