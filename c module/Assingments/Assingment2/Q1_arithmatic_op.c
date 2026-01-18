#include<stdio.h>
void main()
{
	int no1, no2;
	printf("Enter two numbers :");
	scanf("%d%d",&no1,&no2);
	char op;
	printf("Enter operator :");
	scanf(" %c",&op);
	
	if(op=='+')
	    printf("Addition = %d",no1+no2);
	else if(op=='-')
	    printf("Subtraction :%d",no1-no2);
	else if(op=='*')
	    printf("Multiplication :%d",no1*no2);
	else if(op=='/')
	    printf("Division : %d",no1/no2);
	else if(op=='%')
	    printf("Remainder :%d",no1%no2);
	else
	    printf("enter valid operator");
}