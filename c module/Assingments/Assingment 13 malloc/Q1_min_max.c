#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int min(int*,int);
int max(int*,int);
void main()
{
	int arr[]={10,2,3,4,5,6,17};
	int size=sizeof(arr)/sizeof(int);
    int min_no=min(arr,size);
    printf("minimum %d",min_no);
    int max_no=max(arr,size);
    printf("maximum %d",max_no);
	
}
int min(int* arr,int size)
{
	
    int* p=(int*)malloc(sizeof(int));
    *p=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]<*p)
		*p=arr[i];	
	}
	return *p;
}
int max(int* arr,int size)
{
	int* p=(int*)malloc(sizeof(int));
    *p=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]>*p)
		*p=arr[i];	
	}
	return *p;    	
}