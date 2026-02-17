#include<stdio.h>
int findSum(int* ,int);
void main()
{
	int a[]={1,2,3,4,5,7,8,9,10};
	int size=sizeof(a)/sizeof(int);
	
	printf("sum =%d",findSum(a,size));
}
int findSum(int* a,int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}