#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="hello";
	char str2[]="fbs";
	printf("%s",str1);
	printf("\n%s",str2);
	printf("\nAfter :");
	char* str3=strcat(str1,str2);  //what it return  address then str3 point to srt1
	printf("%s",str3);
}