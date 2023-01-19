#include<stdio.h>
void sum(int x,int y)
{
	int z;
	z=x+y;
	printf("Ans=%d",z);
}
void main()
{
		int a,b,c;
	printf("Enter 2 values");
	scanf("%d %d",&a,&b);
	sum(a,b);
}
