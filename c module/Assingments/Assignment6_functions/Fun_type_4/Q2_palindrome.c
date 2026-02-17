#include<stdio.h>
int isPalindrome(int); //fun declaration
void main()
{
	int no;
	printf("Enter number:");
	scanf("%d",&no);
	//fun call
	isPalindrome(no) ? printf("Palindrome") : printf("not palindrome");
	
} // main ends here
int isPalindrome(int no) //fun defination
{
	int temp=no;
	int res=0,rem;
	while(no!=0)
	{
	   rem=no%10;
	   res=res*10+rem;
	   no=no/10;
	}
	return res==temp;
}