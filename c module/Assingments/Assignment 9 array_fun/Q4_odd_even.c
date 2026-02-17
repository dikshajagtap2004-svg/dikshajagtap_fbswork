#include<stdio.h>
void even(int* ,int );
void odd(int* ,int );
void main()
{
	int a[]={1,2,34,5,6,7,8,9,20};
	int size=sizeof(a)/sizeof(int);
	even(a,size);
	odd(a,size);
}
void even(int* a,int size)
{
	printf("Even numbers :\n");
	for(int i=0;i<size;i++)
	{
		if(a[i]%2==0)
		printf("%d ",a[i]);
	}
}
void odd(int* a,int size)
{
	printf("\nOdd numbers :\n");
	for(int i=0;i<size;i++)
	{
		if(a[i]%2!=0)
		printf("%d ",a[i]);
	}
}