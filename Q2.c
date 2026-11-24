#include<stdio.h>
int calculateFact(int);
void main()
{
	int no;
	printf("Enter a number :");
	scanf("%d",&no);
	
	if(no==0)
	  printf("%d  is not a Strong Number",no);
	else if(no<0)
	   printf("Enter value greater than 0");
	else
	{
	int temp=no;
	int sum=0;
	while(no!=0)
	{
		int rem = no%10;
		
		sum =sum + calculateFact(rem);
		no=no/10;
	}
	
	if(sum==temp)
	    printf("%d  is a Strong Number",temp);
	else
	    printf("%d  is not a Strong Number",temp);
	}
}
int calculateFact(int rem)
{
	int fact=1;
	for(int i=1;i<=rem;i++)
	{
		fact = fact*i;
	}
	return fact;
}