#include<stdio.h>
int isPrime(int);
void main()
{   
    int no;
    printf("Enter number :");
    scanf("%d",&no);
    isPrime(no)?printf("%d is Prime",no) :printf("%d not prime",no);	 	
}
int isPrime(int no)
{
	int i = 2; 
    while(i<=no/2)  
    {
    	if(no%i==0)
    	{
    	 return 0;
	    }
		i++;
	}
	return 1;
}