#include<stdio.h>
#include<stdlib.h>
int* createArray(int);
void printAlternate(int* ,int );
void main()
{
	int size;
	printf("Enter size:");
	scanf("%d",&size);
	int* a=createArray(size);
	printAlternate(a,size);
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
void printAlternate(int* a,int size)
{
	for(int i=0;i<size;i+=2)
	{
		printf("%d ",a[i]);
	}
}