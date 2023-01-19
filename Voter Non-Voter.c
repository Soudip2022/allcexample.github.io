#include<stdio.h>
int main()
{
	int a;
	printf("Enter the age\n");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("Voter");
	}
	
	else
	{
		printf("Non-voter");
	}
	  return 0;
}
