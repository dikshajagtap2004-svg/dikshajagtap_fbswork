#include<stdio.h>
int mystrcmp(char*,char*);
int mystrlen(char*);
void main()
{
	char str1[]="firstbit";
	char str2[]="first";
//	printf("%s",str);
	mystrcmp(str1,str2)==0?printf("Strings are equal"):printf("not equal");
	
}
int mystrcmp(char* str1,char* str2)
{
	
	int len1=mystrlen(str1);
	int len2=mystrlen(str2);
	if(len1==len2)
	{
		
	int status=1;
	for(int i=0,j=0;str1[i]!='\0';i++,j++)
	{
		if(str1[i]!=str2[j])
		{
			status=1;
			break;
		}
	}
	if(status==1)
	    return 0;
	else
		return 2;
	}
	else if(len1<len2)
	     return -1;
	else 
	    return 1;
}	

int mystrlen(char* str)
{
	int count=0;
    int i=0;
    while(str[i]!='\0')
    {
    	count++;
    	i++;
	}
    return count;
}	
