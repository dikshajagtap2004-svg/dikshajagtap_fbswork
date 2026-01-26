#include<stdio.h>
void main()
{
	long n;
	int rf,rm;
	printf("Enter number :");
	scanf("%ld",&n);
	
	rm=n%10;
	n=n/10;
	while(n!=0)
	{
	 rf=n%10;
	 n=n/10;	
	}
	printf("sum = %d",rm+rf);
}