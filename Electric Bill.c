#include<stdio.h>
void main()
{
	float u,t;
	printf("Enter the Unit\n");
	scanf("%f",&u);
	if(u>=0)
	{
	
	 if(u<=25)
	 {
	 	t=u*4.89;
	 }                                                  /*ELECTRIC BILL*/
	 else if(u>25 && u<=50)
	 {
		t=122.25+(u-25)*5.23;
	 }
	 else if(u>50 && u<=65)
	 {
	 	t=253+(u-50)*5.78;
	 }
	 else if(u>65 && u<=90)
	 {
	 	t=339.7+(u-65)*6.23;
	 }
	 else 
	 {
	 	t=495.45+(u-90)*7;
	 }
	 printf("Your Total Bill\n");
	printf("%.2f",t);
}
else
printf("Wrong Input");
	
	
}
