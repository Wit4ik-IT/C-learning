#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task6_math_utils.h"

int main()
{
	int num = 0,result;
	printf("Square\nEnter your number: ");
	if (scanf("%d", &num) != 1)
	{
		printf("ERR");
		return 1;
	}
	result = square(num);
	printf("Result: %d", result);
}