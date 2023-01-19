#include<stdio.h>
int main()
{
		int a,b,d,c=0;
	printf("enter the no\n");
	scanf("%d",&a);
	d=a;
	while(a>0)
	{
		b=a%10;
		c=(c*10)+b;
		a=a/10;
	}
	
	
	if(d==c)
	{
		printf("The Number is Palidrome");
	}
	
	else
	{
		printf("The Number is Non-palidrome");
	}
}



