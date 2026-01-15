#include<stdio.h>
void main()
{
	int no=123;
	int r1,r2,r3,q;
	r1 = no%10;
	q = no/10;
	r2 = q%10;
	r3 = q/10;
	int rev = r1*100+ r2*10 + r3;
	
	if(no==rev)
	  printf("%d is a palindrome number",no);
	
	else
	  printf("%d is not palindrome number",no);
}








//void main()
//{
//	int no = 121;
//	if(no/100 == no%10)
//	{
//		printf("no is palindrome");
//		
//	}
//	else
//	{
//		printf("no is not palindrome");
//	}
//}