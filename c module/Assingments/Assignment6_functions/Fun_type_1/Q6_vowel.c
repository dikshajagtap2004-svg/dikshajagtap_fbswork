#include<stdio.h>
void isVowelOrConsonant();
void main()
{
	
	isVowelOrConsonant();
	
}
void isVowelOrConsonant()
{
	char ch;
	printf("Enter character :");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='A'||ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
	{
		printf("%c is vowel",ch);
	}
	else
	{
		printf("%c is consonant",ch);
	}
	
}