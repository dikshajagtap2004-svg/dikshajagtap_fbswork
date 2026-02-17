#include<stdio.h>
void evenOdd(int*); //declaratio 
void main() 
{
	int no;
	printf("Enter number:");
	scanf("%d",&no);
	
    evenOdd(&no);  //call
}//main ends here
void evenOdd(int* no) //fun defination
{
	*no%2==0 ? printf("even"):printf("odd");
	
}