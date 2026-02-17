#include<stdio.h>

void mystrcpy(char*);
void main()
{
	char str[]="firstbit";
//	printf("%s",str);
	mystrcpy(str);
	
}
void mystrcpy(char* str)
{
	char str1[8];
    int i=0;
    while(str[i]!='\0')
    {
    	str1[i]=str[i];
    	i++;
	}
	printf("%s",str1);
}	
