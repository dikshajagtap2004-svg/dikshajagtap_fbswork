#include<stdio.h>
#include<stdlib.h>
int* createArray(int);
void isPresent(int*,int);
void main()
{
	int size;
	printf("Enter size:");
	scanf("%d",&size);
	int* brr=createArray(size);
	isPresent(brr,size);
    
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
void isPresent(int* a,int size)
{   int ele,status=0;
	printf("Enter element :");
	scanf("%d",&ele);
	int i=0;
	while(i<size)
	{
		if(a[i]==ele)
		{
		    status=1;
		    break;
				
		}
		i++;		
	}
	if(status==1)
	printf("Element is found at index :%d",i);
	else
	printf("Element is not found");
		
}