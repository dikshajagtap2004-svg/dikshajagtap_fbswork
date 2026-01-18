#include<stdio.h>
void main()
{
	int price,discount,fprice;
	printf("Enter price :");
	scanf("%d",&price);
	
	char status;
	printf("Are you student ? (y/n) :");
	scanf(" %c",&status);
	
	if(status=='y'||status =='Y')
	{
		if(price>=500)
		{
		printf("Congrates !! You get 20 percent discount\n");
		discount = price * 0.2;
	    }
	    else
	    {
	    	printf("Congrates !! You get 10 percent discount\n");
	    	discount = price* 0.1;
		}
	}
	else
	{
		if(price>=600)
		{
			printf("Congrates !! You get 15 percent discount\n");
			discount = price * 0.15;
		}
		
		else
		{
			discount = 0;
		}
	}
	fprice= price - discount;
	printf("MRP = %d \nDiscount = %d \nFinal price = %d",price,discount,fprice);
}