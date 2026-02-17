#include<stdio.h>
void mystrcat(char*,char*,int);
int mystrlen(char*);
void main()
{
	char str1[20]= "hello";
    char str2[]= "firstbit";
    int n;
    printf("Enter no of characters:");
    scanf("%d",&n);
	mystrcat(str1,str2,n);
	
}
void mystrcat(char* str1,char* str2,int n)
{
	int len1=mystrlen(str1);
	
    for(int i=0;i<n;i++)
    {
    	str1[len1++]=str2[i];
    	
    	
	}
	str1[len1]='\0';
	printf("%s",str1);
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