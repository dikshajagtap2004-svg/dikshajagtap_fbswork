#include<stdio.h>
#include<string.h>
void main()
{
	char str1[] ="Hedlo FBS";   //string to scan
	char str2[]="Hello Fk";  //allow characters
	int count =strspn(str1,str2);
	printf("%d characters are same",count);
	
} 
//str1 -check its character one by one if not present in str2 then return count