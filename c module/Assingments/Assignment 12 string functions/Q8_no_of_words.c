#include<stdio.h>
void main()
{
	char str[]="hello welcome to the world";
	int count=1;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	printf("No of words :%d",count);
} 