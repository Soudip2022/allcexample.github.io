#include<stdio.h>
#include<stdlib.h>
int main()
{
	do
	{
	int s,a,b,c=0;
	char d;
	printf("Press 1 to calculate Sum\n");
	printf("Press 2 to calculate Substact\n");
	printf("Press 3 to calculate Multiply\n");
	printf("Press 4 to calculate Devide\n");
	printf("Enter Your Choise\n");
	scanf("%d",&s);
	printf("Enter 2 Numbers\n");
	scanf("%d %d",&a,&b);
	switch(s)
	{
		case 1:
			c=a+b;
			break;
			case 2:
				c=a-b;
				break;
				case 3:
					c=a*b;
					break;
					case 4:
						c=a/b;
						break;
						default:
							printf("Wrong Input");
	}
	printf("Ans=%d",c);
	printf("Do You Want to Continue it\n");
	printf("Press Y or N\n");
	scanf("%c",&d);	
}
while(d==Y || d==y)
}
