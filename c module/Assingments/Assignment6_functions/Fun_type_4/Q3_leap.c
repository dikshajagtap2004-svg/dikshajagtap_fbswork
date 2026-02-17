#include<stdio.h>
int isLeap(int);
void main()
{
	int year;
	printf("Enter year :");
	scanf("%d",&year);
	isLeap(year)?printf("leap"):printf("not leap");
}
int isLeap(int year)
{
	if(year%4==0 && year%100!=0 || year%400==0)
	   return 1;
	else 
	   return 0;
}