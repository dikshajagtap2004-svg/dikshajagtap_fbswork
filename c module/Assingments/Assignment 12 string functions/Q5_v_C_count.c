#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="hell@o";
	printf("%s\n",str);
	int len=strlen(str);
    int count=0,scount=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'||str[i]=='A'||str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
		{
			count++;
		}
		else if(!(str[i]>='A'&&str[i]<'Z'||str[i]>='a'&&str[i]<='z'))
		{
			scount++;
		}
		
	
		
	}
	printf("v =%d",count);
	printf("c =%d",len-count-scount);
	printf("s =%d",scount);
}