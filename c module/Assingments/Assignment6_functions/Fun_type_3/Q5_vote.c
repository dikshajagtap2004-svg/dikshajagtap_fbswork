#include<stdio.h>
void isEligible(int); //fun declaration
void main()
{
	
	int age;
	printf("Enter age :");
	scanf("%d",&age);
	isEligible(age);  //fun call
	
}//main ends here
void isEligible(int age)  //fun defination
{
   if(age>=18)
		printf("Eligible to vote");
	else
		printf("Not eligible to vote");	
}