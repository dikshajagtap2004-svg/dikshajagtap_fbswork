#include<stdio.h>
void main()
{
	char str1[]="on";
	char str2[]="one";
	
	int count1=0;
	for(int i=0;str1[i]!='\0';i++)
	{
		count1++;
	}
	int count2=0;
	for(int i=0;str2[i]!='\0';i++)
	{
		count2++;
	}
	count1>count2?printf("%s",str1) :printf("%s",str2);
}