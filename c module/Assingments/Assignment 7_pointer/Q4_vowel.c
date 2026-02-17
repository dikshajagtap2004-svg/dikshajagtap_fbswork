#include<stdio.h>
void isVowel(char*);  //fun declaration
void main()
{
	char ch;
	printf("Enter character :");
	scanf("%c",&ch);
	isVowel(&ch);  //fun call

}//main ends here
void isVowel(char* ch) //fun defination
{
	if(*ch=='a'||*ch=='e'|| *ch=='i'|| *ch=='o'|| *ch=='u'||*ch=='A'||*ch=='E'|| *ch=='I'|| *ch=='O'|| *ch=='U')
		printf("%c is vowel",*ch);
	else
		printf("%c is consonant",*ch);
	
}