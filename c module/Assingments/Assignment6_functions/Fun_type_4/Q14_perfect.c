#include<stdio.h>
int isPerfect(int);
void main() {
	int no;

	printf("Enter number :");
	scanf("%d",&no);

	printf("divisors :");
    isPerfect(no)?printf("Perfect"):printf("not perfect");

}
int isPerfect(int no)
{   int i=1,sum=0;
	while(i<=no/2) 
	{
		if(no%i==0) 
		{
			sum = sum + i;
			printf("%d ",i);
		}
		
		i++;
	}
	printf("\nsum :%d ",sum);
	
	return no == sum;
}