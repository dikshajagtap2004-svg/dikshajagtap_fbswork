#include<stdio.h>
void main()
{
	int no,rem,sum=0;
    printf("Enter number :");
    scanf("%d",&no);
	int temp=no,count=0;
	
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

//armstromg number = 123 = 1^3 + 2^3 +3^3  


//void main()
//{
//	int no,rem,sum=0;
//    printf("Enter number :");
//    scanf("%d",&no);
//	int temp=no,count=0;
//	while(no!=0)
//	{   count++;
//	    no = no/10;
//	}
//	printf("count :%d\n",count);
//	while(no!=0)
//	{
//		rem=no%10;
//		
//		int cn = count,r=1;
//		while(cn>0)
//		{
//		  r=r*rem;
//		  cn--;	
//		}
//		printf("rem :%d",r);
//		sum=sum+rem;     //for three digit no only
//		no= no/10;
//	}
//	if(temp==sum)
//	    printf("%d is armstrong number",temp);
//    else
//        printf("%d is not armstrong number",temp);
//     
//}