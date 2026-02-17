#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="hello";
	printf("%s\n",str);
	int ind;
	printf("Enter index :");
	scanf("%d",&ind);
	
	for(int i=ind;str[i]!='\0';i++)
	{
        str[i]=str[i+1];
	}
	
	printf("%s",str);
}