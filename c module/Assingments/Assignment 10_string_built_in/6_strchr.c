#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="firstbit";
	char *p =strchr(str,'t');  //find first occurence
	printf("%c",*p);
}

//void main()
//{
//	char str[]="firstbit";
//	char *p =strrchr(str,'t');  //find last occurence
//	printf("%c",*p);
//}







