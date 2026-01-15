#include<stdio.h>
//void main()
//{
//	int hr= 1;
//	int min = 3;
//	int sec = 15;
//	
//	int time = hr*60*60+ min*60+sec;
//	printf("time = %d seconds",time);
//	
//}

void main()
{
	int hr,min,sec ,stime;
	printf("Convert time into seconds\n");
	printf("Enter time in hh:min:sec = ");
	
	scanf("%d%d%d",&hr,&min,&sec);
	printf("hr :%d , min :%d, sec :%d",hr,min,sec);
	
	stime = hr*60*60+ min*60+ sec;
	printf("\ntime : %d seconds",stime);
}