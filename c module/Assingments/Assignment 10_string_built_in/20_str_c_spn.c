#include<stdio.h>
#include<string.h>
void main()
{
	char str1[] ="ytllo FBS";  //string to scan
	char str2[]="Hello FBS";   //compare with this
	int count =strcspn(str1,str2);  //return count before hitting the match
	printf("%d",count);
}