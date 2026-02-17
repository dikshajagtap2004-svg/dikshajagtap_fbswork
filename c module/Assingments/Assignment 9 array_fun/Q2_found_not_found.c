#include<stdio.h>
void isPresent(int*,int,int);
void main()
{
	int a[] ={2,34,67,11,89,78};
	int size=sizeof(a)/sizeof(int);
	int ele;
	printf("Enter element :");
	scanf("%d",&ele);
	isPresent(a,size,ele);
}
void isPresent(int* a,int size,int ele)
{   int status=0;
	for(int i=0;i<size;i++)
	{
		if(a[i]==ele);
		{
		    status=1;
			break;	
		}
		
	}
	if(status==1)
	printf("Element is found at index");
	else
	printf("Element is not found");
}