#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<4;i++)
	{
		printf("\n");
		
		for(j=3;j>=i;j--)
		{
			printf("*");
		}
	}
}
