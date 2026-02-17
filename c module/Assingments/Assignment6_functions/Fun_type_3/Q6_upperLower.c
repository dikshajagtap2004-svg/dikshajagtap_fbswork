#include<stdio.h>
void isUpperOrLower(char);  //fun declaration
void main()
{
	char ch;
	printf("Enter character :");
	scanf("%d",&ch);
	isUpperOrLower(ch); //fun call
	
}// main ends
void isUpperOrLower(char ch)  //fun defination
{
    if(ch>='A'&& ch<='Z')
		printf("Given character is Uppercase");
	else
		printf("Given character is lowercase");	
}