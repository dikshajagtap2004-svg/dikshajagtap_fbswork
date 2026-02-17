#include<stdio.h>
void isPrime(int);  //fun declaration 
void main()
{   
    int no;
    printf("Enter number :");
    scanf("%d",&no);
    isPrime(no);   //fun call
	 	
}//main ends here
void isPrime(int no)  //fun defination
{
	
	int i = 2,status = 1; 
    while(i<=no/2)  
    {
    	if(no%i==0)
    	{
    	 status = 0;
    	 break;
	    }
		i++;
	}
	
	if(status)
	    printf("%d is  prime",no);
	else
	    printf("%d is not prime",no);
	
}
