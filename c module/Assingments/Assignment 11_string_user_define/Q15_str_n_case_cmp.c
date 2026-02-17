#include<stdio.h>
int mystrcmp(char*,char*,int);
int mystrlen(char*);
void main()
{
	char str1[]="fiRstbit";
	char str2[]="FirstbiT";
	int n;
    printf("Enter no of characters to compare :");
    scanf("%d",&n);
	mystrcmp(str1,str2,n)==0?printf("Strings are equal"):printf("not equal");
	
}
int mystrcmp(char* str1,char* str2,int n)
{
	
	int status=0;
	for(int i=0,j=0;i<n;i++,j++)
	{
		if(str1[i]==str2[j]||str1[i]==str2[j]-32||str1[i]==str2[j]+32)
		{
			status=1;
		}
		else
            status=0;
	}
	if(status==1)
	    return 0;
	else
		return 1;
	
}	

