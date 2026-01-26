#include<stdio.h>
void main()
{
	int sum =0,i=1,n;
	printf("Enter number:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum = sum + i;
		i++;
	}
	printf("sum = %d",sum);
}