#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="hello fbs";
	char str2[strlen(str1)+1];
	printf("Before copy str 1= %s and str2= %s",str1,str2);
	strncpy(str2,str1,7);
	printf("\nAfter copy str 1= %s and str2= %s",str1,str2);

}