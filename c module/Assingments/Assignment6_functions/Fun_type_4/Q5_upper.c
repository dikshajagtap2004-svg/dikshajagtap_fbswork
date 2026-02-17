#include<stdio.h>
int isUpper(char); //declaration
void main()
{
	char ch;
	printf("Enter character :");
	scanf("%c",&ch);
	//call
	isUpper(ch)?printf("Uppercase"):printf("Lowercase");
	
}//main ends here
int isUpper(char ch)   //defination
{
	return ch>='A'&&ch<='Z';
	  
}