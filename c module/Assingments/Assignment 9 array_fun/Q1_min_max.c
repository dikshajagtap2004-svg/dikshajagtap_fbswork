#include<stdio.h>
void min(int*,int);
void max(int*,int);
void main()
{
	int arr[]={10,2,3,4,5,6,17};
	int size=sizeof(arr)/sizeof(int);
    min(arr,size);
    max(arr,size);
	
}
void min(int* arr,int size)
{
	int min=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]<min)
		min=arr[i];	
	}
	printf("min =%d\n",min);
}
void max(int* arr,int size)
{
	int max=arr[0];
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
		max=arr[i];	
	}
	printf("max =%d",max);    	
}