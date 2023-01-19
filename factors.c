#include<stdio.h>
int main()
{
	int a,i;
	printf("Enter the Number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	if(a%i==0)
	printf("Factors is=%d\n",i);
}

