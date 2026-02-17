#include<stdio.h>
#include<math.h>
int armstrongOrNot();
void main()
{
	armstrongOrNot()?printf("Armstrong"):printf("not armstrong");
}
int armstrongOrNot()
{
	int no,count=0;
	printf("Enter numeber :");
	scanf("%d",&no);
	int temp=no;
	while(no!=0)
	{
	  count++;
	  no=no/10;
	}
	no=temp;
	int sum=0;
	while(no!=0)
	{		
		int res=pow(no%10,count);
		sum=sum+res;
		no=no/10;		
	}
	return sum==temp;
	
}