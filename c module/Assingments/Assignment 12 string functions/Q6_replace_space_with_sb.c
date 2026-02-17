#include<stdio.h>
void main()
{
	char str[]="welcome to the world of programming";
	printf("before replace :\n");
	printf("%s\n",str);
	printf("Enter special symbol to replace space :");
	char sp;
	scanf(" %c",&sp);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			str[i]=sp;
		}
	}
	printf("after replace :\n");
	printf("%s",str);
}