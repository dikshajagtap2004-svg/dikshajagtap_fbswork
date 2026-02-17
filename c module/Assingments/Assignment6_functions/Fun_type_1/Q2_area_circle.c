#include<stdio.h>
void areaOfCircle();
void main()
{
	areaOfCircle();
}
void areaOfCircle()
{
	int r;
	printf("Enter radius :");
	scanf("%d",&r);
	
	int area=3.14*r*r;
	printf("Area of circle = %d",area);
}