#include<stdio.h>
int sumLF();
void main()
{
	
	printf("Sum =%d",sumLF());
	
}
int sumLF()
{
	long n;
	printf("Enter number :");
	scanf("%ld",&n);
	int last=n%10;
	
	while(n>10)
	{
	 n=n/10;	
	}
	return last+n;
	
}