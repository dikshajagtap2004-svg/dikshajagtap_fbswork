#include<stdio.h>
int add(int,int); //fun declaration
int sub(int,int);
int mul(int,int);
int div(int,int);
int mod(int,int);

void main()
{
	int no1,no2;
	printf("Enter two numbers :");
	scanf("%d%d",&no1,&no2);
	char op;
	printf("Enter operator (+,-,*,%,/):");

	scanf(" %c",&op);
	
	if(op=='+')
	printf("Additon of %d and %d = %d",no1,no2,add(no1,no2));
	else if(op=='-')
	printf("Subtraction of %d and %d = %d",no1,no2,sub(no1,no2));
	else if(op=='*')
	printf("Multiplication of %d and %d = %d",no1,no2,mul(no1,no2));
	else if(op=='/')
	printf("Division of %d and %d = %d",no1,no2,div(no1,no2));
	else if(op=='%')
	printf("Remainder of %d and %d = %d",no1,no2,mod(no1,no2));
	else
	printf("Enter valid operator");
	
}
int add(int no1,int no2)
{
	return no1+no2;
}
int sub(int no1,int no2)
{
	return no1-no2;
}
int mul(int no1,int no2)
{
	return no1*no2;
}
int div(int no1,int no2)
{
	return no1/no2;
}
int mod(int no1,int no2)
{
	return no1%no2;
}
