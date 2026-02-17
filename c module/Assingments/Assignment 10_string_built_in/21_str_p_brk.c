#include<stdio.h>
#include<string.h>
void main()
{
	char str1[] ="Hello FBS";  //scan and if match with str2 char then returns the address of char in str1
	char str2[] ="ello";     
	char* p=strpbrk(str1,str2);
	printf("%d\n",str1);
	printf("%s\n",str1);
	printf("%d\n",p);
	printf("%c\n",*p);
}