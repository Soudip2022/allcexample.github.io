#include<stdio.h>
void main()
{
	int a[10],s,f=0,i;
	printf("Enter Value in 1st Arrey\n");
	for(i=0;i<=9;i++)
	Scanf("%d",&a[i]);
	printf("Enter the searched value");
	scanf("%d",&s);
	for(i=0;i<=9;i++)
	{
		if(a[i]==s)
		{
			printf("Number found position =%d",i+1);
			f=1;
		}
	}
	if(f=0)
	printf("Number is not found");
}
