#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="hello fbs";
	char* p=strstr(str1,"lloh");
	if(p!=NULL)
	   printf(" substring is present");
	else
	  printf(" substring is not present");

}