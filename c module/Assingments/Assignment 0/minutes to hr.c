#include<stdio.h>
void main()
{
	int minutes = 130;
	int hr = minutes/60;
	int min = minutes%60;
    printf(" %d minutes = %d hours and %d minutes",minutes,hr,min);
}