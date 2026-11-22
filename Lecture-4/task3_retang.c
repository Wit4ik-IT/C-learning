#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void retangle(int weight, int height);

void retangle(int weight, int height)
{
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
