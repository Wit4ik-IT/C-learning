#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int lastlttr(char* ptr2)
{
	int lst = 0;
	for (int i = 0; (*(ptr2 + i) != '\0'); i++)
	{
		lst = i;
	}
	return lst;
}

void chng(char* ptr1, char* ptr2)
{
	*ptr1 = '6';
	*ptr2 = '7';
}

int main()
{
	char arr[SIZE]= "";
	printf("Enter your word: ");
	scanf("%s", arr);
	char* ptr1;
	char* ptr2;
	int count;
	count = lastlttr(arr);
	ptr1 = arr;
	ptr2 = (arr + count);
	chng(ptr1, ptr2);
	printf("%s", arr);
	
	
	
	
	return 0;
}