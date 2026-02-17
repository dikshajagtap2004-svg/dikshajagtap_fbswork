#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="hello fbs";
	char str2[strlen(str1)+1];
	printf("Before copy str 1= %s and str2= %s",str1,str2);
	strcpy(str2,str1);
	printf("\nAfter copy str 1= %s and str2= %s",str1,str2);
}


//void main()
//{
//	char str1[]="hello fbs";
//	char str2[strlen(str1)+1];
//	printf("Before copy str 1= %s and str2= %s",str1,str2);
//	int i=0;
//	while(str1[i]!='\0')
//	{
//		str2[i]=str1[i];
//		i++;
//	}
//	str2[i]='\0';
//	printf("\nAfter copy str 1= %s and str2= %s",str1,str2);
//}