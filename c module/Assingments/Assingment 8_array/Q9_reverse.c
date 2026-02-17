#include<stdio.h>
void main()
{
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(int);
	printf("\nBefore reverse :");
	for(int i=0;i<size;i++)
	{
	   printf("%d ",arr[i]);
	}
		
	int i=0,j=size-1;
	for(int k=0;k<size/2;k++)
	{
		int temp=arr[i];
		arr[i++]=arr[j];
		arr[j--]=temp;		
	}
	printf("\nAfter reverse :");
	for(int k=0;k<size;k++)
	{
	   printf("%d ",arr[k]);
	}

}
