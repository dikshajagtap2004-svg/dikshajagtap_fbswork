#include<stdio.h>
int isPalindrome(int);
void main()
{
	
	int no;
	printf("Enter number:");
	scanf("%d",&no);
	isPalindrome(no)?printf("palindrome"):printf("not palindrome");
	
    
}
int isPalindrome(int no)
{
	int rev=0;
	int temp =no,rem;
	while(no!=0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
		
	}
	printf("reverse :%d\n",rev);
	return temp==rev;
}