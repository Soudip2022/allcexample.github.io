#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
		printf("\n");
		
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=3-i;k++)
		{
			printf("*");
		}
	}
}
