#include<stdio.h>
#include<stdlib.h>
int* createArray(int);
void display(int*, int );
void sortArray(int* ,int );
void main()
{
	int size;
	printf("Enter the size of array :");
	scanf("%d",&size);
	int* arr=createArray(size);
		
	printf("before sorting :\n");
	display(arr,size);
	
	sortArray(arr,size);
	
	printf("\nafter sorting :\n");
	display(arr,size);
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
void display(int* arr, int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
void sortArray(int* arr,int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		
		}
	}
	
}