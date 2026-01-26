#include<stdio.h>
void main()
{
	
	int no;
	printf("Enter number:");
	scanf("%d",&no);
	int rev=0,r1;
	int temp =no,rem;
	while(no!=0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
		
	}
	printf("reverse :%d\n",rev);
	if(temp==rev)
		printf("palindrome");
	else
	    printf("not palindrome");
    
}