#include<stdio.h>
int isPalindrome(); //declaration 
void main()
{    //call
	isPalindrome()? printf("palindrome") : printf("not palindrome");	
}//main ends here
int isPalindrome()   //fun defination
{
	int no,r1,r2,r3,q;
	printf("Enter any 3 digit number :");
	scanf("%d",&no);

	r1 = no%10;
	q = no/10;
	r2 = q%10;
	r3 = q/10;
	int rev = r1*100+ r2*10 + r3;
	
	return no==rev;
}
