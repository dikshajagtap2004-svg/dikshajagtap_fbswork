#include<stdio.h>
#include<stdlib.h>
int* createArray(int);
void isprime(int* ,int );
void main()
{
	int size;
	printf("Enter size of array :");
	scanf("%d",&size);
	int* a=createArray(size);
	isprime(a,size);
}
int* createArray(int size)
{
	int* arr = (int*)malloc(sizeof(int)*size);
	printf("Enter Elements in array: ");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
    }
    return arr;
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