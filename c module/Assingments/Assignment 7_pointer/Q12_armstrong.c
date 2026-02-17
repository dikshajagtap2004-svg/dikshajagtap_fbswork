#include<stdio.h>
#include<math.h>
void isArmstrong(int*);  //fun declaration
void main()
{
	int range;
	printf("Enter end range number :");
	scanf("%d",&range);
	isArmstrong(&range);  //fun call
}//mains ends here
void isArmstrong(int* range) //defination
{
	for(int i=1;i<=*range;i++)
	{
		int no=i,count=0;
		while(no!=0)
		{
			count++;
			no=no/10;			
		}
		no=i;
		int sum=0;
		while(no!=0)
		{
			int rem=no%10;
			sum=sum+pow(rem,count);
			no=no/10;
		}
		if(sum==i)
		    printf("\n%d armstrong",i);
	}
}