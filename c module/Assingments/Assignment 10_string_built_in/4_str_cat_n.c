#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="hello";
	char str2[]="fbs";
	printf("%s",str1);
	strncat(str1,str2,2);
	printf("\n%s",str1);
}