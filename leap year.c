#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the Year\n");
	scanf("%d",a);
	b=a%4 && a%400;
	
	if(b=0){
		printf("The Year is leapyear");
	}
	else{
		printf("the Year is not Leapyear");
	}
	return 0;
}
