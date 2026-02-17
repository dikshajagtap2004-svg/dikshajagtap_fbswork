#include<stdio.h>
void isPrime(int);
void main()
{
	int range;
	printf("Enter end range number :");
	scanf("%d",&range);
	
	isPrime(range);
}
void isPrime(int range)
{
	for(int i=1;i<=range;i++)
	{
		int status=1;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				status=0;
				break;
			}
		}
		if(status==1)
		  printf("%d ",i);
	}
}