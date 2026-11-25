#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_max(int* ptr1)
{
	int c = *ptr1;
	for (int i = 0; i < 7; i++)
	{
		if (*(ptr1 + i) > c)
		{
			c = *(ptr1 + i);
		}

	}
	return c;
}
int arrayInput(int* ptr1)
{
	for (int i = 0; i < 7; i++)
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
	int arr[7] = { 0 };
	int result;
	int* ptr1 = arr;
	if (arrayInput(ptr1) == 1)
	{
		return 1;
	}
	result = find_max(ptr1);
	printf("Max: %d", result);

	return 0;
}