#include<stdio.h>
void sortArray(int* ,int );
void main()
{
	int arr[]={5,4,3,6,7,1,9,10};
	
	int size=sizeof(arr)/sizeof(int);
//	printf("Size :%d",size);
	printf("before sorting :\n");
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	sortArray(arr,size);
	
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
	printf("\nafter sorting :\n");
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}