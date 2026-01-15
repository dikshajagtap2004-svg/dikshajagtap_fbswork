#include<stdio.h>
void main()
{
	int chem = 88, phy = 67, bio = 88, math = 87, it = 82, total;
	total = chem + phy + bio + math + it;
	float per = total/5;
//	float no = 1/2; // it give 0 ans instead of 0.5 but if we give no = 1.0/2 or 1/2.0 then it give 0.5
//	printf("foat division  %f",no);
//	printf("per %f",per);
	printf("Total marks = %d \nPercentage = %f",total, per);
	
}