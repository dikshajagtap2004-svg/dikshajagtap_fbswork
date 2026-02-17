#include<stdio.h>
double basicSalary(); 
void main()
{
   printf("Total salary : %lf",basicSalary());//call
}//main ends here
double basicSalary()
{
	double salary;
	printf("Enter salary :");
	scanf("%lf",&salary);
	
	if(salary<=5000)
	{
		double da=salary*0.1;
		double ta=salary*0.2;
		double hra=salary*0.25;
		return salary+da+ta+hra;
	}
	else
	{
		double da=salary*0.15;
		double ta=salary*0.25;
		double hra=salary*0.3;
		return salary+da+ta+hra;
	}
}
