#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_value(int* ptr1)
{
	if (ptr1 == NULL)
	{
		printf("Pointer is Null");
	}
	else
	{
		printf("Value: %d", *ptr1);
	}
}

int main()
{
	int b = 25;
	int chs = 0;
	int* ptr1;
	printf("Select amount of pointer:\n1)Number 2)Null\n");
	if (scanf("%d", &chs) != 1)
	{
		printf("ERROR: Wrong input");
		return 1;
	}
	switch (chs)
	{
		case 1:
		{	
			ptr1 = &b;
			break;
		}
		case 2:
		{
			ptr1 = NULL;
			break;
		}
		default:
		{
			printf("ERROR: Invalid input");
			return 1;
		}
	}

	print_value(ptr1);
	return 0;
}