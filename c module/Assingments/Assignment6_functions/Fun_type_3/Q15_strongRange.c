#include<stdio.h>
void isStrong(int);
void main()
{
	int range;
	printf("Enter range :");
	scanf("%d",&range);
	
	isStrong(range);
}
void isStrong(int range)
{
	for(int i=1;i<=range;i++)
	{
		int sum=0;
		int no=i;
		while(no!=0)
		{
			int fact=1;
			int rem=no%10;
			while(rem>=1)
			{
				 fact=fact*rem;
				 rem--;
			}
			sum=sum+fact;
			no=no/10;
		}
		if(sum==i)
		printf("%d ",i);
	}
}