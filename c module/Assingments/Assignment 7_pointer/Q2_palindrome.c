#include<stdio.h>
void ispalindrome(int*); //declaration
void main()
{
	int no;
	printf("Enter 3 digit no:");
	scanf("%d",&no);
	ispalindrome(&no); //call
}//main ends here
void ispalindrome(int* no) //defination
{
	int rem,rev=0,temp=*no;
	while(*no!=0)
	{
		rem=*no%10;
		*no=*no/10;
		rev=rev*10+rem;
	}
	
	temp==rev ? printf("%d is a palindrome number",temp) : printf("%d is not palindrome number",temp);
}
