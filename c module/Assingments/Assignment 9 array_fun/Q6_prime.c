#include<stdio.h>
void isprime(int* ,int );
void main()
{
	int size;
	printf("Enter size of array :");
	scanf("%d",&size);
	int a[size];
	printf("Enter Elements :");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	isprime(a,size);
}
void isprime(int* a,int size)
{
	
	for(int i=0;i<size;i++)
	{   int status=1;
		for(int j=2;j<=a[i]/2;j++)
		{
			if(a[i]%j==0)
			{
				status=0;
				break;
			}
			
		}
		if(status==1)
		printf("%d ",a[i]);
		
	}
}