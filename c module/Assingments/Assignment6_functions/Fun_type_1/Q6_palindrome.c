#include<stdio.h>
void isPalindrome(); //fun declaration
void main()
{
	isPalindrome(); //call
}//main ends here
void isPalindrome() //defination
{
   int no;
   printf("Enter number :");
   scanf("%d",&no);
   int rev=0,temp=no;
   while(no!=0)
   {
   	int rem=no%10;
   	rev=rev*10+rem;
   	no=no/10;
   }
   if(rev==temp)
     printf("Palindrome");
   else 
     printf("not palindrome");
}