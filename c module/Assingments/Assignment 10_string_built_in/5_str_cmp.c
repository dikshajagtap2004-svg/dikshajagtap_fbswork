#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="hello";
	char str2[]="hellw";
	int res=strcmp(str1,str2);
	if(res==0)
	    printf("equal");
	else
	    printf("not equal");
	
}