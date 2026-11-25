#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 7



int find_max(int* ptr1, int count)
{
	int c = *ptr1;
	for (int i = 0; i < count; i++)
	{
		if (*(ptr1 + i) > c)
		{
			c = *(ptr1 + i);
		}

	}
	return c;
}


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


int main()
{
	int count = SIZE;
	int arr[SIZE] = { 0 };
	int result;
	int* ptr1 = arr;
	if (arrayInput(ptr1,count) == 1)
	{
		return 1;
	}
	result = find_max(ptr1, count);
	printf("Max: %d", result);

	return 0;
}