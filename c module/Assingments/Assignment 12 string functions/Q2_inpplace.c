#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="hello";
	int len=strlen(str);
	char inp='l';
	char rep='a';
	for(int i=0;i<len;i++)
	{
		if(str[i]=='l')
		  str[i]='a';
	}
	printf("%s",str);
}