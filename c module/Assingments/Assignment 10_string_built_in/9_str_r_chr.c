#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="hello fbs";
	char* p=strrchr(str1,'l');
	if(p!=NULL)
	{
		printf("l is found at index %d",p-str1);
	}
	else
	    printf("Not found");

}