#include<stdio.h>
void tempConverter(); //fun declaration
void main() 
{
     tempConverter(); //fun call
}//main ends here
void tempConverter()  //defination
{
	int cel,f;
	printf("Enter temperature in celsius :");
	scanf("%d",&cel);
	
	f=(cel*1.8)+32;
	printf("Fahrenheit =%d",f);
	
}
