#include<stdio.h>
void studentDiscount(int*,int*);
void generalDiscount(int*,int* );
void main()
{
	int price,fprice;
	int discount;
	printf("Enter price :");
	scanf("%d",&price);
	
	char status;
	printf("Are you student ? (y/n) :");
	scanf(" %c",&status);
	
	if(status=='y'||status =='Y')
	{
		studentDiscount(&price,&discount);
	}
	else
	{
		 generalDiscount(&price,&discount);
	}
	fprice= price - discount;
	printf("MRP = %d \nDiscount = %d \nFinal price = %d",price,discount,fprice);
}
void studentDiscount(int *price,int* discount)
{
	if(*price>=500)
		{
		printf("Congrates !! You get 20 percent discount\n");
		*discount = (*price)  *0.2;
	    }
	else
	    {
	    	printf("Congrates !! You get 10 percent discount\n");
	    	*discount = (*price)  *0.1;
		}
}
void generalDiscount(int *price,int* discount)
{
	if(*price>=600)
		{
			printf("Congrates !! You get 15 percent discount\n");
			*discount = (*price) *0.15;
		}
		
		else
		{
			*discount = 0;
		}
}