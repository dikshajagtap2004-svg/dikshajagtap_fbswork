#include<stdio.h>
void main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10,11};
	int size =sizeof(arr)/sizeof(int);
	for(int i=0;i<size;i+=2)
	{
		printf("%d ",arr[i]);
	}
}