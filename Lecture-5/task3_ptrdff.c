#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 6

int arrayInput(int* ptr1, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("Enter your %d number: ", i + 1);
		if (scanf("%d", (ptr1 + i)) != 1)
		{
			printf("ERROR: wrong input\n");
			return 1;
		}
	}
	return 0;
}


int sumarray(int* ptr1, int count)
{
	int sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum = sum + *(ptr1 + i);
	}
	return sum;
}


int main()
{
	int count = SIZE;
	int arr[SIZE] = {0};
	int* ptr1;
	int result;
	ptr1 = arr;
	arrayInput(ptr1, count);
	result = sumarray(ptr1,count);
	printf("Sum: %d", result);
	return 0;
}