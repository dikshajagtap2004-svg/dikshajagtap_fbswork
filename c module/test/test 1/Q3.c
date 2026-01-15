#include<stdio.h>
void main()
{
	int no;
	printf("Enter a number:");
	scanf("%d",&no);
	int r1 = no%100;
	printf("%d",r1);                    //print last two digit of the number
}