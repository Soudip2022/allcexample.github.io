#include<stdio.h>
int main()
{
	int i,a,b,p;
	printf("Enter the number");
	scanf("%d",&a);
	printf("Enter the Power value");
	scanf("%d",&b);
	p=a;
	for(i=1;i<b;i++)
	{
		p=p*a;
	}
	printf("%d",p);
}
