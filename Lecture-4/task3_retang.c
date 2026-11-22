#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int retangle(int weight, int height);

int retangle(int weight, int height)
{
	if (weight || height < 0)
	{
		printf("ERROR: negative numbers not allowed");
		return 1;
	}
	int w, h;
	h = height;
	printf("\n");
	while (h != 0)
	{
		w = weight;
		while (w != 0)
		{
			printf("* ");
			w--;
		}
		h--;
		printf("\n");
	}
	return 0;
}

int main()
{
	int weight = 0, height = 0;

	printf("Enter weight and height your retangle\nWeight: ");

	if (scanf("%d", &weight) != 1)
	{
		printf("ERROR: wrong input");
		return 1;
	}

	printf("Height: ");

	if (scanf("%d", &height) != 1)
	{
		printf("ERROR: wrong input");
		return 1;
	}
	retangle(weight, height);
}
