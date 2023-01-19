#include<stdio.h>
#include<string.h>
void main()
{
	char a[30];
	printf("Enter the string\n");
	gets(a);
	strrev(a);
	printf("You Entered\n");
	puts(a);
}
