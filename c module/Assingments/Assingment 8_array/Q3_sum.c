#include<stdio.h>
void main()
{
	int arr[]={1,2,3,4,5,6};
	int size=sizeof(arr)/sizeof(int);
	int sum=0;
	printf("Elements in array :");
	for(int i=0;i<size;i++)
	{   printf("%d ",arr[i]);
		sum=sum+arr[i];	
	}
	printf("\nsum =%d",sum);
}