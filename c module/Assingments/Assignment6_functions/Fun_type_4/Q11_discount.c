#include<stdio.h>
int studentDiscount(int);
int generalDiscount(int);
void main()
{
     char status;
     printf("Are you a student ?(y/n):");
     scanf("%c",&status);
     
     int price,ds;
     printf("\nEnter price :");
     scanf("%d",&price);
     if(status=='y'||status=='Y')
     {
     	int ds = studentDiscount(price);
        printf("\nMRP = %d \nDiscount =%d, \nFinal price =%d",price,ds,price-ds);
	 }
	 else
	 {
	 	int ds = generalDiscount(price);
	 	if(ds==0)
	 	printf("\nFinal price =%d",price);
        printf("\nMRP = %d \nDiscount =%d, \nFinal price =%d",price,ds,price-ds);
	 }
     
}
int studentDiscount(int price)
{
	if(price>500)
	return price*0.20;
	else 
	return price*0.10;
}
int generalDiscount(int price)
{
	if(price>600)
	return price*0.15;
	else 
	return 0;
	
}