#include<stdio.h>
void isUpperOrLower();
void main()
{
	isUpperOrLower();
	
}
void isUpperOrLower()
{
	char ch;
	printf("Enter character :");
	scanf("%c",&ch);
	ch>='A'&& ch<='Z' ? printf("Given character is Uppercase"):printf("Given character is lowercase");
		
}