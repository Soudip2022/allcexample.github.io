#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,s;
	char d;
	do
	{
		printf("Press 1 to Sum\n");
		printf("Press 2 to Substract\n");
		printf("Press 3 to multiply\n");
		printf("Press 4 to Devide\n");
		printf("Enter Your Choise\n");
		scanf("%d",&s);
		printf("Enter 2 number\n");
		scanf("%d %d ",&a,&b);
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
							default :
								printf("Wrong Input");
			}	
			printf("ans=%d\n",c);
			printf("Do You Continue It?\n");
			printf("Press Y or N\n");
			d=getch();
	}while(d=='Y' || d=='y');

}

