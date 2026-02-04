#include<stdio.h>
void main()
{
//	int range;
	printf("Enter range :");
	scanf("%d",&range);
	for(int i=1; i<=range; i++)
	{
		int no =i;
		int sum=0;
		while(no!=0)
		{
			int rem=no%10;
			int fact=1;
			
			for(int j=1;j<=rem;j++)
			{
				fact=fact* j;
			}
			sum=sum+fact;
			no=no/10;
		}
		if(sum==i)
		    printf("\n%d",i);
	}
}