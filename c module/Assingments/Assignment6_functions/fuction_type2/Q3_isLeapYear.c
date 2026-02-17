#include<stdio.h>
int isLeapYear();   //fun declaration 
void main()
{
	isLeapYear() ?printf("leap year") : printf("not leap year"); //fun call
}//main ends here
int isLeapYear()  //fun defination
{
	int year;
	printf("Enter year :");
	scanf("%d",&year);
	
	if(year%4==0 && year%100!=0 || year%400==0)
	   return 1;
	else
	   return 0;
}