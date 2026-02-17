#include<stdio.h>
#include<string.h>
void main()
{
	char str[6],ch;
	printf("Enter strning :");
	scanf("%s",str);
	
	printf("Enter char to search :");
	scanf(" %c",&ch);
	char* p;
	p=strchr(str,ch);
	printf("%c is found at %d",ch,p-str);  //this line has problem
}