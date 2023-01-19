#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,n;
	printf("1 for sum\n");
	printf("2 for substract\n");
	printf("3 for Multiply\n");
	printf("4 for Devide\n");
	printf("Choose a Number\n");
	scanf("%d",&n);
	if(n==1)
	{
		printf("Enter 2 Number\n");
		scanf("%d %d",&a,&b);
		printf("Ans is=%d",(a+b));
	}
	else if(n==2)
	{
		printf("Enter 2 Number\n");
	    scanf("%d %d",&a,&b);
		printf("Ans is=%d",(a-b));	
	}
	else if(n==3)
	{
		printf("Enter 2 Number\n");
		scanf("%d %d",&a,&b);
		printf("Ans is=%d",(a*b));
	}
	else if(n==4)
	{
		printf("Enter 2 Number\n");
		scanf("%d %d",&a,&b);
		printf("Ans is=%d",(a/b));
	}
	else
	{
		printf("Wrong Input");
	}
}
