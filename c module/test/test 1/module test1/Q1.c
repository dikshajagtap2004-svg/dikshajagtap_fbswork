#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="   welcome to  the world of programming";
	int i=0;
	int count=0;
	while(str[i] !='\0')
	{
		if(str[i]!=' ')
		{
			if(i==0||str[i-1]==' ')
			count++;
		}
		i++;
	}
	printf("no of words:%d",count);
}

