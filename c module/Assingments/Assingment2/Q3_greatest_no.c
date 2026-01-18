#include<stdio.h>
void main()
{
	int no1,no2,no3;
	printf("Enter 3 numbers :");
	scanf("%d%d%d",&no1,&no2,&no3);\
	
	if(no1>no2)
	{
		if(no1>no3)
			printf("%d is greatest",no1);
		else
		    printf("%d is greatest",no3);
    }
	else if(no2>no3)
		printf("%d is greatest",no2);
	else
	    printf("%d is greatest",no3);
	
}