void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
void mod(int,int);
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
	    add(no1,no2);
	else if(op=='-')
	    sub(no1,no2);
	else if(op=='*')
	    mul(no1,no2);
	else if(op=='/')
	    div(no1,no2);
	else if(op=='%')
	    mod(no1,no2);
	else
	    printf("enter valid operator");

}
void add(int no1,int no2)
{
	printf("addition = %d",no1+no2);
}
void sub(int no1,int no2)
{
	printf("subtraction = %d",no1-no2);
}
void mul(int no1,int no2)
{
	printf("multiplication = %d",no1*no2);
}
void div(int no1,int no2)
{
	printf("Division = %d",no1/no2);
}
void mod(int no1,int no2)
{
	printf("modulus = %d",no1%no2);
}