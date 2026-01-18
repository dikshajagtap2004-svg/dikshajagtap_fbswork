#include<stdio.h>
void main()
{
	int no;
	printf("Enter number :");
	scanf("%d",&no);
	
	if(no%3==0 && no%5!=0)
	{
		printf("%d is divisible by 3 but not by 5",&no);
	}
	else if(no%3!=0 && no%5==0)
	{
		printf("%d is divisible by 5 but not by 3");
	}
	else if(no%3==0 && no%5==0)
	{
		printf("divisible by both");
	}
	else
	{
		printf("divisible by none");
	}		
}



//void main()
//{
//	int no;
//	printf("Enter number :");
//	scanf("%d",&no);
//	
//	int flag1,flag2;
//	if(no%3==0)
//	{
//		flag1=0;
//	}
//	if(no%5==0)
//	{
//		flag2=0;
//	}
//	if(flag1==0 && flag2==0)
//	{
//		printf("no is divisible by 3 and 5 both");
//	}
//	else if(flag1==0 && flag2!=0)
//	{
//		printf("no is divisible by 3 but not by 5");
//	}
//	else if(flag1!=0 && flag2==0)
//	{
//		printf("no is divisible by 5 but not by 3");
//	}
//	else
//	{
//		printf("divisible by none");
//	}
//}