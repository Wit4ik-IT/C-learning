#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

int main()
{
	char word[50];
	size_t length;
	printf("Word length\nEnter your word: ");
	scanf("%49s", word);
	length = strlen(word);
	printf("Length: %d", length);
	return 0;
}