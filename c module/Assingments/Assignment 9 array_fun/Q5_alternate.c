#include<stdio.h>
void printAlternate(int* ,int );
void main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int size=sizeof(a)/sizeof(int);
	printAlternate(a,size);
}
void printAlternate(int* a,int size)
{
	for(int i=0;i<size;i+=2)
	{
		printf("%d ",a[i]);
	}
}