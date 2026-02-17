#include<stdio.h>
void sumRange();
void main()
{
	sumRange();
	
}
void sumRange()
{
	int start,end,sum =0;
	printf("Enter number start and end:");
	scanf("%d%d",&start,&end);
	while(start<=end)
	{
		sum = sum + start;
		start++;
	}
	printf("sum = %d",sum);
}