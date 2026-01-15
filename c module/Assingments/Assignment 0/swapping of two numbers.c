#include<stdio.h>
void main()
{
	int no1 = 10;
	int no2 = 20;
	printf("Before swapping \n no1 = %d \n no2 = %d",no1,no2);
	int temp = no1;
	no1 = no2;
	no2 = temp;
	printf("\nAfter swapping \n no1 = %d \n no2 =%d",no1, no2);
	printf("\ntemp is %d",temp);
}