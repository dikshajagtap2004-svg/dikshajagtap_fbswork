#include<stdio.h>
void main()
{
	int size;
	printf("Enter array size: ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter elements in array :");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int n = sizeof(arr)/sizeof(int);
	
	for(int i=0;i<n;i++)
	{   
	    int max=arr[i];
	    for(int j=i+1;j<n;j++)
	    {
	    	if(max<arr[j])
		   {
		   	max=arr[j];
			arr[j] = arr[i];
            arr[i] = max;
		 	
		   }
		}
		
	}
	
	printf("\nLargest element: %d",arr[0]);
	printf("\nSmallest element: %d",arr[n-1]);
}