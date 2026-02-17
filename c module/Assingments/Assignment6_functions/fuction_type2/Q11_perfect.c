#include<stdio.h>
int perfect();
void main()
{
	perfect()?printf("perfect"):printf("not perfect");	
}
int perfect()
{
	int no,sum=0;
	printf("Enter number:");
	scanf("%d",&no);
	
	for(int i=1;i<no;i++)
	{
		if(no%i==0)
		sum=sum+i;
	}
	return sum==no;
}