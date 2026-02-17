#include<stdio.h>
int calFact(int);
void main()
{
	
	int n;
	printf("Enter no :");
	scanf("%d",&n);
	printf("Factorial of %d = %d",n,calFact(n));
	
}
int calFact(int n)
{   int fact=1;
	while(n>=1)
	{
		fact = fact*n;		
		n--;
	}
	return fact;
}