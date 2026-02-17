#include<stdio.h>
void swap(); //declaration
void main()
{
	swap(); //call
}//main ends here  
void swap()  //defination
{
	int no1,no2,temp;
	printf("Enter two numbers :");
	scanf("%d%d",&no1,&no2);
	printf("\nbefore swap \n no1 =%d, \n no2 =%d",no1,no2);
	
	temp=no1;
	no1=no2;
	no2=temp;
	
	printf("\nafter swap \n no1=%d, \n no2=%d",no1,no2);
}