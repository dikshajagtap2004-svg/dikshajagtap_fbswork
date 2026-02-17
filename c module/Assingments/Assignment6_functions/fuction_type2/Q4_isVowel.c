#include<stdio.h>
int isVowel(); //declaration
void main()
{    //call
	isVowel()?printf("Vowel"):printf("consonant");  
}//main ends here
int isVowel()   //fun defination
{
	char ch;
	printf("Enter character :");
	scanf("%c",&ch);
	
	if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	    return 1;
	else
	    return 0;
}