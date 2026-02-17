#include<stdio.h>
void tSalary(double);  //fun declaration
void main()
{
	double basic;
	printf("Enter basic salary :");
	scanf("%lf",&basic);
	
	tSalary(basic);  //fun call	
}//main ends here
void tSalary(double basic)  //fun defination
{
	printf("%lf",basic);
	double da, ta, hra, tsalary;
	if(basic <=5000)
	{
		da = basic * 0.1;
	    ta = basic * 0.2;
	    hra = basic * 0.25;
		
	}
	else 
	{
		da = basic *0.15;
		ta = basic *0.25;
		hra= basic *0.3;
	
	}
	tsalary= basic + da + ta + hra;
	printf("\nTotal Salary = %lf",tsalary);
}