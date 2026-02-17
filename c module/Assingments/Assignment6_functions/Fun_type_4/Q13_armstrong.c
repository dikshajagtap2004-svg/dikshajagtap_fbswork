#include<stdio.h>
int isArmstrong(int);
void main()
{
	int no;
    printf("Enter number :");
    scanf("%d",&no);
    isArmstrong(no)?printf("Armstrong"):printf("Not armstrong");
     
}
int isArmstrong(int no)
{
	int temp=no,rem,sum=0;
	
	while(no!=0)
	{
		rem=no%10;
		no= no/10;
		sum=sum+rem*rem*rem;     //for three digit no only
	}
	return  temp==sum;
}