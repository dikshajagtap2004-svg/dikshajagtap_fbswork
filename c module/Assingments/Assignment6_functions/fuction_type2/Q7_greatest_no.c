#include<stdio.h>
int greatestNo();
void main()
{
	printf("greatest number is : %d",greatestNo());
}
int greatestNo()
{
	int n1,n2,n3;
	printf("Enter 3 numbers :");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	if(n1>n2 && n1>n3)
	   return n1;
	else if(n2>n1 && n2>n3)
	   return n2;
	else 
	   return n3;
}