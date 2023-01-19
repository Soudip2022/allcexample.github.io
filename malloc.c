#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,i,n;
	printf("Enter how many Students\n");
	scanf("%d",&n);
	p=(int*)malloc(n* sizeof(int));
	printf("Enter Roll\n");
	for(i=0;i<n;i++)
	scanf("%d",(p+i));
	printf("You Entered\n");
	for(i=0;i<n;i++)
	printf("%d",*(p+i));
}
