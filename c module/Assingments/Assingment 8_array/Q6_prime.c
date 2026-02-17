#include<stdio.h>
void main()
{
	int arr[]={2,3,4,5,6,7,8,9,10,11,13,23,45,66,99};
	int size=sizeof(arr)/sizeof(int);
	printf("Prime numbers :");
	for(int i=0;i<size;i++)
	{
		int status=1;
		for(int j=2;j<=arr[i]/2;j++)
		{
			if(arr[i]%j==0)
			{
				status=0;
				break;
			}
		  
		}
		if(status==1)
		{
			printf("%d ",arr[i]);
		}
	}
}