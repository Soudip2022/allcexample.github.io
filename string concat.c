#include<stdio.h>
#include<string.h>
void main()
{
	char a[30],b[40];
	printf("Enter the 1st string\n");
	gets(a);
	printf("Enter the 2nd String\n");
	gets(b);
	strcat(a,b);
	printf("String Concat=\n");
	puts(a);
}
