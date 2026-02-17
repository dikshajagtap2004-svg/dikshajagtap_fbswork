#include<stdio.h>
void sum();
void main()
{
	sum(); //call
}//main ends here
void sum()
{
	int n1,n2;
	printf("Enter two numbers :");
	scanf("%d%d",&n1,&n2);
	
	printf("Addition : %d",n1+n2);
}