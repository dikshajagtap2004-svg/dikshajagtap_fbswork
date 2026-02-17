#include<stdio.h>
int evenOdd(int);
int isPrime(int);
int isPalindrome(int);
int isPosNegZero(int);
int reverse(int);
int sum(int);
void main() {
	do{
	printf("\n\n\t1.To check number is even  or odd.");
	printf("\n\t2.To check number is prime or not.");
	printf("\n\t3.To check number is palindrome or not.");
	printf("\n\t4.To check number is positive, negative or zero.");
	printf("\n\t5.To reverse a number.");
	printf("\n\t6.To find sum of digits.");
	printf("\n\t7.Exit.");

	int choice;
	printf("\nEnter choice : ");
	scanf("%d",&choice);

    int no;
	printf("Enter no :");
	scanf("%d",&no);

	if(choice==1) {
		evenOdd(no)?printf("even"):printf("odd");
		
			
	}

	else if(choice==2) {
		isPrime(no)?printf("prime"):printf("not prime");
		
	}

	else if(choice==3) {
		isPalindrome(no)?printf("Palindrom"):printf("not palindrome");
	} 
	else if(choice==4) {
	int res =isPosNegZero(no);
	if(res==1)
	printf("Positive");
	else if(res==-1)
	printf("Negative");
	else
	printf("zero");
	
		
	} else if(choice==5) {
		printf("Reverse : %d",reverse(no));
	
	} else if(choice==6) {		
		printf("sum = %d",sum(no));
	} else if(choice==7) {
		printf("\n-------EXIT-------");
		break;
	} else
		printf("\n------ INVALID CHOICE -------");
	}while(1);
	
}
int evenOdd(int no)
{
	return no%2==0;
}
int isPrime(int no)
{
	
		for(int i=2; i<=no/2; i++) {
			if(no%i==0) {
				return 0;
			}
		}
		return 1;
		
}
int isPalindrome(int no)
{
	int temp=no,rev=0;
		while(temp!=0) {
			int rem=temp%10;
			rev=rev*10+rem;
			temp=temp/10;
		}
		return no==rev;
}
int isPosNegZero(int no)
{
	if(no>0)
			return 1;
		else if(no<0)
			return -1;
		else
			return 0;
}
int reverse(int no)
{
	int rem,rev=0;
		while(no!=0) {
			rem=no%10;
			rev=rev*10+rem;
			no=no/10;
		}
		return rev;
}
int sum(int no)
{
	int sum=0;
		while(no!=0) {
			int rem=no%10;
			sum=sum+rem;
			no=no/10;
		}
		return sum;
}