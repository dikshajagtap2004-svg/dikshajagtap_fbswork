#include<stdio.h>
void main() {
	int n;
	printf("Enter number :");
	scanf("%d",&n);
	int temp=n,sum=0,fact,r1;
	
	while(temp!=0) {
		r1=temp%10;

		fact = 1;
		while(r1>=1) {
			fact = fact*r1;
			r1--;
		}
		sum = sum + fact;
		temp=temp/10;
	}
    printf("original number :%d\nsum :%d",n,sum);
	if(n==sum)
		printf("\nstrong number"); 
	else
		printf("\nnot strong");

}
//strong no :no = sum of fact of all digits in original number 
// e.g num= 145  
//5!=120 4!=24 1!=1
//120+24+1 = 145
// so 145 is strong