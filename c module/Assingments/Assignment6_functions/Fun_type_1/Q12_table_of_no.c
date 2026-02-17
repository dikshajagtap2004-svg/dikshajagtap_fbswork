#include<stdio.h>
void table();
void main()
{   
   
	table();
	
}
void table()
{
	int no;
	printf("Enter no:");
	scanf("%d",&no);
    for(int i=1;i<=10;i++)
	{
		printf("%d ",i*no);
	}	
}