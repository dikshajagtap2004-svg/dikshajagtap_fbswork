#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="hello";
	printf("%s\n",str);
	char temp =str[0];
	int len=strlen(str);
	str[0]=str[len-1];
	str[len-1]=temp;
	printf("%s",str);
}