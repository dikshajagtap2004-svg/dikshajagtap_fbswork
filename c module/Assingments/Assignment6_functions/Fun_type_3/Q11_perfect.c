#include<stdio.h>
void isPerfect(int);  //declaration 
void main() {
	int no;
	printf("Enter number :");
	scanf("%d",&no);

    isPerfect(no); //call
	
}// main ends here
void isPerfect(int no)  //defination
{
	printf("divisors :");
    int i=1,sum=0;
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
	
	no == sum ?printf("\n%d is perfect number",no):printf("\n%d is not perfect",no);
}