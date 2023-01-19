#include<stdio.h>
void main()
{
	int a[10],i,m,f=0,l=9,flag=0,s;
	printf("Enter the search element");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	printf("Enter the search element");
	scanf("%d",&s);
	for(i=0;i<=9;i++)
	{
		m=(f+l)/2;
		if(a[m]==s)
		{
			printf("No Found Position=%d",m+1);
			flag=1;
			break;
			
		}
		else
		{
			if(a[m<s])
			f=m+1;
			else
			l=m-1;
		}
	}
	if(flag==0)
	printf("No not Found");
}


