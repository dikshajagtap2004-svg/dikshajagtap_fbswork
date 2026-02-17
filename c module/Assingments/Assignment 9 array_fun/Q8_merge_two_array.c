#include<stdio.h>
void mergeArray(int* ,int* ,int ,int);
void main()
{
	int a1[] ={1,2,3,4,5,6,7,8,9,10};
	int a2[] ={11,12,13,14,15};
	int s1=sizeof(a1)/sizeof(int);
	int s2=sizeof(a2)/sizeof(int);
	
	
	printf("\nArray 1:");
	for(int i=0;i<s1;i++)
	{
		printf("%d ",a1[i]);
	}
	printf("\nArray 2:");
	for(int i=0;i<s2;i++)
	{
		printf("%d ",a2[i]);
	}
	mergeArray(a1,a2,s1,s2);
	
}
void mergeArray(int* a1,int* a2,int s1,int s2)
{
	int s3=s1+s2;
	int a3[s3];
	for(int i=0;i<s1;i++)
	{
		a3[i]=a1[i];
	}
	for(int i=0;i<s2;i++)
	{
		a3[s1++]=a2[i];
	}

	printf("\nArray 3:");
	for(int i=0;i<s3;i++)
	{
		printf("%d ",a3[i]);
	}
}