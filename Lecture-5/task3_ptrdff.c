#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void arrayInput(int* ptr1)
{
	for (int i = 0; i < 6; i++)
	{
		printf("Enter your %d number: ", i + 1);
		if (scanf("%d", (ptr1 + i)) != 1)
		{
			printf("ERROR: wrong input\n");
			return 1;
		}
	}
}


int sumarray(int* ptr1)
{
	int sum = 0;
	for (int i = 0; i < 6; i++)
	{
		sum = sum + *(ptr1 + i);
	}
	return sum;
}


int main()
{
	int arr[6] = {0};
	int* ptr1;
	int result;
	ptr1 = arr;
	arrayInput(ptr1);
	result = sumarray(ptr1);
	printf("Sum: %d", result);
	return 0;
}