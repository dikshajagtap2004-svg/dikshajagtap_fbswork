#include<stdio.h>
int mystrstr(char*,char*);
int mystrlen(char*);
void main()
{
	char str1[]="first";
	char str2[]="stw";

	mystrstr(str1,str2)?printf("substring"):printf("not substring");
	//str1 - main String  str2-substring
}
int mystrstr(char* str1,char* str2)
{
	
	int len1=mystrlen(str1);
	int len2=mystrlen(str2);
	if(len1==len2||len1>len2)
	{  int status=0,min=0;
	   for(int i=0;str2[i]!='\0';i++)                              
	                                                             
	   {
	   	
	   	for(int j=min;str1[j]!='\0';j++)
	   	{
	   	     if(str2[i]==str1[j])
				{
					min=j+1;
					status=1;
					break;
					
				}
			else
			    status=0;	
		}
	  }
		if(status==1)
		return 1;
	   	
	   	
	  }
	
	else if(len1<len2)
	     return 0;

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
