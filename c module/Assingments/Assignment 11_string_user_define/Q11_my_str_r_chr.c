#include<stdio.h>

int mystrchr(char*,char);
void main()
{
	char str[]="hello";
	char ch;
    printf("Enter element to found :");
    scanf("%c",&ch);
    mystrchr(str,ch);
	
}
int mystrchr(char* str,char ch)
{
	int count=0;
    int i=0;
    while(str[i]!='\0')
    {
    	if(str[i]==ch)
    	{   
		    count=i+1;
    		
		}
		i++;
    	
	}
    if(count!=0)
       printf("element found at position %d",count);
    else 
       printf("not found");
}	
