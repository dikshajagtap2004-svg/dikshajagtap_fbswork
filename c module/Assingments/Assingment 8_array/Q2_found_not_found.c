#include<stdio.h>
void main()
{
	int a[] ={2,34,67,11,89,78};
	int size=sizeof(a)/sizeof(int);
	int ele, status=0;
	printf("Enter element :");
	scanf("%d",&ele);
	for(int i=0;i<size;i++)
	{
		if(a[i]==ele);
		{
		    status=1;
			break;	
		}
		
	}
	if(status==1)
	printf("Element is found");
	else
	printf("Element is not found");
}