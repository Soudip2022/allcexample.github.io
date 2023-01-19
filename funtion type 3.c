#include<stdio.h>
int sum(int x,int y)
{
	int z;
	z=x+y;
	return(z);
}
void main()
{
	int a,b,c;
	printf("enter 2 value");
	scanf("%d %d",&a,&b);
	c=sum(a,b);
	printf("Ans=%d",c);
}
