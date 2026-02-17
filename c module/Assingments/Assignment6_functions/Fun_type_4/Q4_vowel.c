#include<stdio.h>
int isVowel(char); //declaration
void main()
{
	char ch;
	printf("Enter character :");
	scanf("%c",&ch);
	//call
	isVowel(ch)?printf("%c is vowel",ch):printf("%c is consonant",ch);
}//main ends here
int isVowel(char ch)  //defination
{
	
  return (ch=='a'||ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='A'||ch=='E'|| ch=='I'|| ch=='O'|| ch=='U');
	
}