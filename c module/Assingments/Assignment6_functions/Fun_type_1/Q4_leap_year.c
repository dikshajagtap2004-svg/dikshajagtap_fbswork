#include<stdio.h>
void  leapYear(); //fun declaration
void main()
{
	leapYear(); //fun call
}//main ends here
void leapYear()
{
	int year;
	printf("Enter year :");
	scanf("%d",&year);
	
	if(year%4==0 && year%100!=0 ||year%400==0)
	{
		printf("%d leap year",year);
	}
	else
	    printf("%d not leap year",year);
}