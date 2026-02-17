#include<stdio.h>
int evenOdd(int);
void main()
{
	int no;
	printf("Enter no :");
	scanf("%d",&no);
	evenOdd(no)? printf("%d is Even",no): printf("%d is Odd",no);
	
	
}
int evenOdd(int no)
{
	return (no%2==0);
	
}