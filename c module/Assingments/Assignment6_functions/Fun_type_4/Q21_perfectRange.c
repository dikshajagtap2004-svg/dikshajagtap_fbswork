#include<stdio.h>
void isPerfect();  //fun declaration
void main()
{
	isPerfect();   //fun call
	
}// main ends here
void isPerfect()  //fun defination
{
	int range;
	printf("Enter end range no:");
	scanf("%d",&range);
	
	for(int i=1;i<=range;i++)
	{
		int sum=0;
		for(int j=1;j<=i/2;j++)
		{
			if(i%j==0)
		    {
		       sum=sum+j;
			}
		}
		if(sum==i)
		  printf("%d ",i);
	}
	
}