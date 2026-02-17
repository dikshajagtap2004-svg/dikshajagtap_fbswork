#include<stdio.h>
int evenodd();//fun declaration
void main()
{   //call
	evenodd()?printf("even"):printf("odd");
}//main ends here
int evenodd() //fun defination
{
	int no;
	printf("Enter number :");
	scanf("%d",&no);
	if(no%2==0)
	    return 1;
	else 
	    return 0;
}