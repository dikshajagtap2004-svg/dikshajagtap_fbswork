#include<stdio.h>
int evenOdd(int);   //fun declaration
void main()
{
	int no;
	printf("Enter number :");
	scanf("%d",&no);
	//fun call
	evenOdd(no) ? printf("Even") : printf("Odd");
}
int evenOdd(int no)  //fun defination
{
	return no%2==0;
}