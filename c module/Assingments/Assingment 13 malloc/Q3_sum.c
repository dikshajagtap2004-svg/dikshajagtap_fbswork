#include<stdio.h>
#include<stdlib.h>
int* createArray(int);
int findSum(int* ,int);
void main()
{
	int size;
	printf("Enter size:");
	scanf("%d",&size);
	int* a=createArray(size);
	printf("sum =%d",findSum(a,size));
}
int* createArray(int size)
{
	int* arr = (int*)malloc(sizeof(int)*size);
	printf("Enter Elements in array");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
    }
    return arr;
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
















