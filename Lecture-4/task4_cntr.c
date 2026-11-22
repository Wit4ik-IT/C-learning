#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int counter = 0;

void increment()
{
	counter++;
}
void printcounter()
{
	printf("Counter: %d", counter);
}

int main()
{
	increment();
	increment();
	increment();
	printcounter();
	return 0;
}