#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="hello fbs new student";
	char* token=strtok(str1," ");
	while(token != NULL)
	{
		printf("%s\n",token);
		token = strtok(NULL," ");
	}

}