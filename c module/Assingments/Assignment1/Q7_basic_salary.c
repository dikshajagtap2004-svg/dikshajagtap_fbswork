#include<stdio.h>
void main()
{
	float basic = 6000;
	printf("Basic = %f",basic);
	
	
	float  da, ta, hra, tsalary;
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
	printf("\nTotal Salary = %f",tsalary);
}