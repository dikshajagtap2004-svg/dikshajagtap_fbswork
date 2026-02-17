#include<stdio.h>
void isArmstrong(int);
void main()
{
	
	int no;
    printf("Enter number :");
    scanf("%d",&no);
    isArmstrong(no);
     
}
void isArmstrong(int no)
{
	int temp=no,rem,sum=0;
	
	while(no!=0)
	{
		rem=no%10;
		no= no/10;
		sum=sum+rem*rem*rem;     //for three digit no only
	}
	if(temp==sum)
	    printf("%d is armstrong number",temp);
    else
        printf("%d is not armstrong number",temp);
}