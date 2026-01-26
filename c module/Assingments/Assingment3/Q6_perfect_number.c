#include<stdio.h>
void main() {
	int no,i=1,sum=0;

	printf("Enter number :");
	scanf("%d",&no);

	printf("divisors :");

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
	
	if(no == sum)
		printf("\n%d is perfect number",no);
	else
		printf("\n%d is not perfect",no);
}
//perfect no : sum of all divisor execluding itself = original number
// or no = 6
//6 is divided by 1 2 3 = 6
//so 6 is perfect number