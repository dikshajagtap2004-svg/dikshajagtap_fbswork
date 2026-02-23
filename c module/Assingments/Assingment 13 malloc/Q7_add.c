#include<stdio.h>
#include<stdlib.h>
int* createArray(int);
void addArray(int* ,int*,int,int );
void main()
{
	int s1,s2;
	printf("Enter size of 1 array :");
	scanf("%d",&s1);
	int* a=createArray(s1);
	printf("Enter size of 1 array :");
	scanf("%d",&s2);
	int* b=createArray(s2);
	

	addArray(a,b,s1,s2);
	
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
void addArray(int* arr1,int* arr2,int s1,int s2)  
{   
	int min=s1<s2 ?s1:s2;
	int s3=s1>s2 ?s1:s2;
	int* arr3=(int*)malloc(sizeof(int)*s3);
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
