#include<stdio.h>
#include<stdlib.h>
int* createArray(int);
void display(int*,int);
void reveseArray(int* ,int );
void main()
{
	
	printf("Enter size of array:");
	int size;
	scanf("%d",&size);
	int* a= createArray(size);
	
	printf("\nBefore reverse :");
	display(a,size);
	
	reveseArray(a,size);
	
	printf("\nAfter reverse :");
	display(a,size);
	

}
int* createArray(int size)
{
	
	int* arr= (int*)malloc(sizeof(int)*size);
	printf("Enter Elements in array: ");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
    }
    return arr;
} 
void display(int* arr,int size)
{
	for(int i=0;i<size;i++)
	{
	   printf("%d ",arr[i]);
	}
}
void reveseArray(int* arr,int size)
{
	int i=0,j=size-1;
	for(int k=0;k<size/2;k++)
	{
		int temp=arr[i];
		arr[i++]=arr[j];
		arr[j--]=temp;		
	}
	
}
