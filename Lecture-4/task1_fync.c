#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a, int b)
{
	int c = a + b;
	printf("Sum is %d", c);
}

int main() 
{
	int a = 0, b = 0;
	printf("Enter your numbers: ");
	scanf("%d %d", &a, &b);
	sum(a, b);

	

}