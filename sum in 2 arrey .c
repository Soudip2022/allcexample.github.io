#include<stdio.h>
void main()
{
	int a[10],b[10],c[10],i;
	printf("Enter Value in 1st Arrey\n");
	for(i=0;i<=9;i++)
	Scanf("%d",&a[i]);
	printf("Enter Value in 2nd Arrey\n");
	for(i=0;i<=9;i++)
	Scanf("%d",&b[i]);
	for(i=0;i<=9;i++)
	c[i]=a[i]+b[i];
	printf("Ans is=\n");
	for(i=0;i<=9;i++)
	printf("%d\n",c[10]);

}
