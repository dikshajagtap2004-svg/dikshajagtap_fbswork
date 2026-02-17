#include<stdio.h>
void eligible();
void main()
{	
	eligible();
}
void eligible()
{
	int age;
	printf("Enter age:");
	scanf("%d",&age);
	age>=18 ? printf("Eligible to vote"):printf("Not eligible to vote");
	
}