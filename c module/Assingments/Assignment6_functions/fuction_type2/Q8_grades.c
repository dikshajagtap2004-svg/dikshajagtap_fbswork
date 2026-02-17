#include<stdio.h>
char grades();
void main()
{
   char res =grades();
   if(res=='d')
     printf("Distingtion");
   else if(res=='f')
     printf("First class");
   else if(res=='s')
     printf("second class");
   else if(res=='p')
     printf("pass");
   else
      printf("fail");

}
char grades()
{
	int marks;
	printf("Enter marks :");
	scanf("%d",&marks);
	if(marks>75)
	   return 'd';
	else if(marks>65)
	   return 'f';
	else if(marks>55)
	   return 's';
	else if(marks>40)
	   return 'p';
	else 
	   return 'a';
	
}