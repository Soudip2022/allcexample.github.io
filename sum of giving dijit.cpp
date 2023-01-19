#include<stdio.h>
int main()
{
	int n;
	printf("Enter The Number");
	scanf("%d",&n);
	int sum=0;
	int i=1;
	while(i<=n)
	{
		i++;
		sum=sum+i;
		
	}
	printf("%d",sum);
}
