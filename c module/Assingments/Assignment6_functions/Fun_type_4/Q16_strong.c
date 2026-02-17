#include<stdio.h>
int isStrong(int);  //declaration
void main() {
	int n;
	printf("Enter number :");
	scanf("%d",&n);
	isStrong(n)?printf("\n%d strong",n):printf("\n%d not strong",n);
	//call
}//main ends here
int isStrong(int n)    //fun defination
{
	int temp=n,sum=0,fact,rem;
	
	while(temp!=0) {
		rem=temp%10;

		fact = 1;
		while(rem>=1) {
			fact = fact*rem;
			rem--;
		}
		sum = sum + fact;
		temp=temp/10;
	}
    printf("original number :%d\nsum :%d",n,sum);
	return n==sum;
	
}