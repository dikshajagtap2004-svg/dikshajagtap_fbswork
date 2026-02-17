#include<stdio.h>
#include<string.h>
void main()
{
	char str1[] ="Hello FBS";
	char str2[10];
	memcpy(str2,str1,5);  
	str2[10]='\0';
	printf("%s\n",str1);
	printf("%s",str2);
}