#include<stdio.h>
void main()
{
	char str[]="firstbi solutions";
	printf("%s\n",str);
	int j=0;
	for(int i=0;str[i]!='\0';i+=2)
	{
		str[j++]=str[i];
	}
	str[j-1]='\0';
	printf("%s",str);
}