#include<stdio.h>
int main()
{
	int a[10],b[10],i;
	printf("Enter the 10 number for a\n");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=9;i++)
	scanf("%d",&b[i]);
	printf("You enter in a\n");
	for(i=0;i<=9;i++)
	printf("%d",a[i]);
	printf("You enter in b\n");
	for(i=0;i<=9;i++)
	printf("%d",b[i]);
	return(0);
}
