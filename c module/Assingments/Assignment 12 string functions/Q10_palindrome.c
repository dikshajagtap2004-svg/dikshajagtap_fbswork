#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="aaa";
	int len=strlen(str);
	int status=1;
	for(int i=0,j=len-1;i<j;i++,j--)
	{
		if(!(str[i]==str[j]))
		{
			status=0;
			break;
		}
	}
	if(status==1)
		printf("palindrom");
	else
	    printf("not");
}
