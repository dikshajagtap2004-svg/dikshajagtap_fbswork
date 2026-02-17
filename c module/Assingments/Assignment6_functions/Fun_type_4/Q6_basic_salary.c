#include<stdio.h>
double tSalary(double);
void main()
{
	double basic;
	printf("Enter basic salary :");
	scanf("%lf",&basic);
	printf("Total salary = %lf",tSalary(basic));
}
double tSalary(double basic)
{   double da,ta,hra;
	if(basic<=5000)
	{
		da=basic*0.1;
		ta=basic*0.2;
		hra=basic*0.25;
		
	}
	else
	{
		da=basic*0.15;
		ta=basic*0.25;
		hra=basic*0.30;
	}
	return basic+da+ta+hra;
	
}