#include<stdio.h>

void mystrupper(char*);
void main()
{
	char str[]="firstbit";
//	printf("%s",str);
	mystrupper(str);
	
	
}
void mystrupper(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a'&&str[i]<='z')
		{    char ch=str[i]-32;
			str[i]= ch;
		}
		i++;
	}
	printf("%s",str);
}	