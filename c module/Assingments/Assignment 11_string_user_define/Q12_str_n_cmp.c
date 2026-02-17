#include<stdio.h>
int mystrncmp(char*,char*,int);
int mystrlen(char*);
void main()
{
	char str1[]="hello";
	char str2[]="heolw";

	mystrncmp(str1,str2,3)==0?printf("Strings are equal"):printf("not equal");
	
}
int mystrncmp(char* str1,char* str2,int no)
{
	int len1=mystrlen(str1);
	int len2=mystrlen(str2);
	
	if(len1==len2||len1>len2)
	{
		
	    for(int i=0,j=0;i<no;i++,j++)
	    {
		    if(str1[i]!=str2[j])
			return 1;
    	}
	    return 0;
	}
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