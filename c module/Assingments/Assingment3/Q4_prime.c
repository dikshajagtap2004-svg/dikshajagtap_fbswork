#include<stdio.h>
void main()
{   
    int no;
    printf("Enter number :");
    scanf("%d",&no);
	int i = 2,status = 0; 
	
	
    while(i<=no/2)  
    {
    	if(no%i==0)
    	{
    	 status = 1;
    	 break;
	    }
		i++;
	}
	
	if(status == 1)
	    printf("%d is not prime",no);
	else
	    printf("%d is prime",no);
	 	
}

