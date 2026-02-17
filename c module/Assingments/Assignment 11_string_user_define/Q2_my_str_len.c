#include<stdio.h>

void mystrlen(char*);
void main()
{
	char str[]="firstbit";
//	printf("%s",str);
	mystrlen(str);
	
}
void mystrlen(char* str)
{
	int count=0;
    int i=0;
    while(str[i]!='\0')
    {
    	count++;
    	i++;
	}
    printf("length =%d",count);
}	
