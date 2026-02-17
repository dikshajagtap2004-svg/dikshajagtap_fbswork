#include<stdio.h>
int add(); // declaration
int sub();
int mul();
int div();
void main()
{
	char op;
	printf("Enter operator :");
	scanf("%c",&op);
	
	if(op=='+')
	  printf("Addition = %d",add());   // fun call
	else if(op=='-')
	    printf("Subtraction = %d",sub());
	else if(op=='*')
	    printf("Multiplication = %d",mul());
	else if(op=='/')
	    printf("Division = %d",div());
	else if(op=='%')
	    printf("Mod = %d",mod());
	else
	    printf("Invalid operator.Enter any of +,-,*,/,%");	
}
int add()
{
    int no1,no2;
	printf("Enter two numbers :");
	scanf("%d%d",&no1,&no2);
	
	return no1+no2;	
}
int sub()
{
	int no1,no2;
	printf("Enter two numbers :");
	scanf("%d%d",&no1,&no2);
	
	return no1-no2;
}
int mul()
{
	int no1,no2;
	printf("Enter two numbers :");
	scanf("%d%d",&no1,&no2);
	
	return no1*no2;
}
int div()
{
	int no1,no2;
	printf("Enter two numbers :");
	scanf("%d%d",&no1,&no2);
	
	return no1/no2;
	
}
mod()
{
	int no1,no2;
	printf("Enter two numbers :");
	scanf("%d%d",&no1,&no2);
	
	return no1%no2;
	
}