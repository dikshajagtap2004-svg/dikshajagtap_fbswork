#include<stdio.h>
#include<stdlib.h>
int* createArray(int);
void display(int* ,int*,int,int);
void mergeArray(int* ,int* ,int ,int);  //fun declaration

void main()
{
	int s1,s2;
	printf("Enter size of 1 array :");
	scanf("%d",&s1);
	int* a=createArray(s1);
	printf("Enter size of 1 array :");
	scanf("%d",&s2);
	int* b=createArray(s2);   //createArray fun call
    display(a,b,s1,s2);      
	
	mergeArray(a,b,s1,s2);
	
}//main ends here
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
void display(int* a1,int* a2,int s1,int s2)
{
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