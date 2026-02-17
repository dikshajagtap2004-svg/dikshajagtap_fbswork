#include<stdio.h>
void isPerfect(int*);  //fun declaration
void main()
{
	int range;
	printf("Enter range :");
	scanf("%d",&range);
	
	isPerfect(&range); //fun call
}//main ends here
void isPerfect(int* range)  //fun defination
{
	for(int i=1;i<=*range;i++)
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