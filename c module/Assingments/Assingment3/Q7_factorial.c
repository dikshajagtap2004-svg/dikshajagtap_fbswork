#include<stdio.h>
void main()
{
	
	int fact=1, n;
	printf("Enter no :");
	scanf("%d",&n);
	
	while(n>=1)
	{
		fact = fact*n;		
		n--;
	}
	printf("%d",fact);
}