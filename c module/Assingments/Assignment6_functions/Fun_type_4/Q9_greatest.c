#include<stdio.h>
int greatest(int,int,int);
void main()
{
	int no1,no2,no3;
	printf("Enter 3 numbers :");
	scanf("%d%d%d",&no1,&no2,&no3);
	int res = greatest(no1,no2,no3);
	printf("%d is greatest",res);
}
int greatest(int no1,int no2,int no3)
{
	if(no1>no2 && no1>no3)
	return no1;
	else if(no2>no1 && no2>no3)
	return no2;
	else 
	return no3;
}