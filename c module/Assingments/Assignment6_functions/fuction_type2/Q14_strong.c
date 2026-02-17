#include<stdio.h>
int isStrong();
void main() {
	isStrong()?printf("\nstrong number"):printf("\nnot strong");
	
}
int isStrong()
{
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
	return n==sum;
		

}