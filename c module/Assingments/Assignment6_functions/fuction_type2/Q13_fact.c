#include<stdio.h>
int calFact();
void main()
{
	printf("Factorial = %d",calFact());
}
int calFact()
{
	int fact=1, n;
	printf("Enter no :");
	scanf("%d",&n);
	
	while(n>=1)
	{
		fact = fact*n;		
		n--;
	}
	return fact;
}