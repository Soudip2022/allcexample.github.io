#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<4;i++)
	printf("\n");
	for(j=0;j<=3-i;j++)
	printf(" ");
	for(k=i+1;k>=1;k++)
	printf("%d",k);
	
}
