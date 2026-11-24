#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	printf("Enter a string :");
	scanf("%s",&str);
	
	int len = strlen(str);
	char str1[len];
	int j=0;
	for(int i=len-1;i>=0;i--)
	{
		str1[j++]=str[i];
	}
	str1[j]='\0';
	printf("%s ",str1);
	
	int i=0;
	while(str1[i]!='\0')
	{
		str[i]=str1[i];
		i++;
	}
	str[i]='\0';
	printf("%s",str);
	
}