#include<stdio.h>
void calFact();  //fun declaration
void main()
{
	calFact();  //fun call
	
}//main ends here
void calFact()  //defination
{
	int fact=1,n;
	printf("Enter no :");
	scanf("%d",&n);
	
	while(n>=1)
	{
		fact = fact*n;		
		n--;
	}
	printf("%d",fact);
}