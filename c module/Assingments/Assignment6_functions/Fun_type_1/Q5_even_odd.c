#include<stdio.h>
void evenodd();
void main()
{
	evenodd(); //fun call
}//main ends here
void evenodd()
{
	int no;
	printf("Enter number :");
	scanf("%d",&no);
	
	no%2==0 ? printf("Even"):printf("odd");
}