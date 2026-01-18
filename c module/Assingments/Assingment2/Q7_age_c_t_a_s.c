#include<stdio.h>
void main()
{
	int age;
	printf("Enter age :");
	scanf("%d",&age);
	
	if(age<12)
	{
		printf("Child");
	}
	else if(age>=12 && age<=19)
	{
		printf("You are a Teenager");
	}
	else if(age>=20 && age<60)
	{
		printf("You are a Adult");
	}
	else
	{
		printf("You are a senior citizen");
	}
}