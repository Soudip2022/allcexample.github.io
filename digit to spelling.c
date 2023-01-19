#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c=0,d=0;
	printf("Enter a Number\n");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		c=(c*10)+b;
		a=a/10;
		}	
		while(c>0)
		{
			d=c%10;
		
	switch(d)
	{
		case 0:
			printf("Zero");
			break;
			case 1:
				printf("One");
				break;
				case 2:
					printf("Two");
					break;
					case 3:
						printf("Three");
						break;
						case 4:
							printf("Four");
							break;
							case 5:
								printf("Five");
								break;
								case 6:
									printf("Six");
									break;
									case 7:
										printf("Seven");
										break;
										case 8:
											printf("eight");
											break;
											case 9:
												printf("Nine");
												break;
																									
	}
	c=c/10;
}
}
