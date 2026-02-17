#include<stdio.h>
int studentDiscount();
int gernalDiscount();
void main()
{
	char status,discount ;
	printf("Are you student ? (y/n) :");
	scanf("%c",&status);
	
	if(status=='y'||status=='Y')
	{
		 discount = studentDiscount();
		printf("Discount =%d",discount);
		
	}
	    
	else
	{
		discount = gernalDiscount();
		printf("Discount =%d",discount);
	}
	    
}
int studentDiscount()
{
	int price;
	printf("Enter price :");
	scanf("%d",&price);
	
	if(price>500)
	   return price*0.2;
	else 
	   return price*0.1;
	  
}
int gernalDiscount()
{ 
    int price;
    printf("Enter price :");
	scanf("%d",&price);
	if(price>600)
	  return price*0.15;
	else
	  return 0;
}