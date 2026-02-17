#include<stdlib.h>
#include<stdio.h>
void mystrrev(char*);
void main()
{
	char str[]="firstbit";
//	printf("%s",str);
	mystrrev(str);
	
}
void mystrrev(char* str)
{
	char str1[8];
    int i=0,j=7;
    while(str[i]!='\0')
    {
    	str1[j]=str[i];
    	i++;
    	j--;
	}
	
	printf("%s",str1);
}