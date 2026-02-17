#include<stdio.h>
void isLeap(int*); //fun declaration
void main()
{
   int year;
   printf("Enter year :");
   scanf("%d",&year);
   isLeap(&year); //fun call
   
}//main ends here
void isLeap(int* year)  //defination
{
	if(*year%4==0 && *year%100!=0 || *year%400==0)
   	    printf("leap year");
    else
   	    printf("not leap year");
}