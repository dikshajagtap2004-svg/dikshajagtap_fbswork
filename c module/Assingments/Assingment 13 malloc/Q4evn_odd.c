#include<stdio.h>
#include<stdlib.h>
int* createArray(int);
void even(int* ,int );
void odd(int* ,int );
void main()
{
	int size;
	printf("Enter size:");
	scanf("%d",&size);
	int* a=createArray(size);
	even(a,size);
	odd(a,size);
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
void even(int* a,int size)
{
	printf("Even numbers :\n");
	for(int i=0;i<size;i++)
	{
		if(a[i]%2==0)
		printf("%d ",a[i]);
	}
}
void odd(int* a,int size)
{
	printf("\nOdd numbers :\n");
	for(int i=0;i<size;i++)
	{
		if(a[i]%2!=0)
		printf("%d ",a[i]);
	}
}