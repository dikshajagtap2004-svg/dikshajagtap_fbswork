#include<stdio.h>
void main()
{
	int arr1[]={1,2,3,4,5,6,7,8,9,10};
	int arr2[]={11,12,13,14,15};
	
    int s1= sizeof(arr1)/sizeof(int);
	int s2= sizeof(arr2)/sizeof(int);
	printf("\nArray 1:");
	for(int i=0;i<s1;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\nArray 2:");
	for(int i=0;i<s2;i++)
	{
		printf("%d ",arr2[i]);
	}
	int min=s1<s2 ?s1:s2;
	int s3=s1>s2 ?s1:s2;
	int arr3[s3];
	for(int i=0;i<min;i++)
	{
	
	   arr3[i]=arr1[i]+arr2[i];
	}
	
	for(int i=min;i<s3;i++)
	{
		
	   arr3[min++]=(s1>s2?arr1:arr2)[i];
	}
	printf("\nElements in array 3:");
	for(int i=0;i<s3;i++)
	{
		printf("%d ",arr3[i]);
	}
}         