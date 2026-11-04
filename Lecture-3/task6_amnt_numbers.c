#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, amnt = 0;
	printf("Enter your whole positive number: ");
	if (scanf("%d", &num) != 1)
	{
		printf("Oops, wrong input\n");
		return 1;
	}
	if (num < 1)
	{
		printf("Error: need positive number ^_^\n");
		return 1;
	}

	while (num != 0)
	{
		amnt++;
		num = num / 10;
	}
	printf("Number of digits: %d", amnt);
	return 0;
}