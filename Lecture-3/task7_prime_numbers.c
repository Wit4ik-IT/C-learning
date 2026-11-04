#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, count = 0 , i = 1;;
	printf("Enter your whole positive number: \n");
	if (scanf("%d", &num) != 1)
	{
		printf("Oops, invalid input");
		return 1;
	}
	if (num < 2)
	{
		printf("ERROR: number need be bigger, than 2  ^_^");
		return 1;
	}
	while (i < 10)
	{
		if (i == num)
		{
			i++;
			continue;
		}
		if (num % i == 0)
		{
			count++;
		}
		i++;
	}

	if (count <= 1)
	{
		printf("%d - Prime", num);
	}
	else
		printf("%d - Not prime", num);

	return 0;
}