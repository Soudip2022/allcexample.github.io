#include<stdio.h>
int main()
{
	int a,i,f=1;
	printf("Enter the Number");
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	f=f*i;
	printf("Funtional no=%d",f);
}
