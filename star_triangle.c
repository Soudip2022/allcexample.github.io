#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
		printf("\n");
		
		for(j=0;j<4-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<i;k++)
		{
			printf(" *");
		}
	}
}
