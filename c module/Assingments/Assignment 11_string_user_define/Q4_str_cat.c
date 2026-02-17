#include<stdio.h>
#include<string.h>
void mystrcat(char*,char*);
int mystrlen(char*);
void main()
{
	char str1[]= "hello";
    char str2[]= "firstbit";
	mystrcat(str1,str2);
	
}
void mystrcat(char* str1,char* str2)
{
	int len1=mystrlen(str1);
	int len2=len1+mystrlen(str2);
    int i=0;
    while(str2[i]!='\0')
    {
    	str1[len1]=str2[i];
    	i++;
    	len1++;
	}
	str1[len2+1]='\0';
	printf("%s",str1);
}	

int mystrlen(char* str)
{
	int count=0;
    int i=0;
    while(str[i]!='\0')
    {
    	count++;
    	i++;
	}
    return count;
}	