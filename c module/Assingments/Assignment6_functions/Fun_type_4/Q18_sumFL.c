#include<stdio.h>
int sumFL(int);
void main()
{
	int no;
	printf("Enter no:");
	scanf("%d",&no);
	printf("sum of first and last digit = %d",sumFL(no));
}
int sumFL(int no)
{
	int last=no%10;
	while(no>10)
	{
		no=no/10;
	}
	return no+last;
}