#include<stdio.h>
#include<math.h>
void isArmstrong(); //fun declaration
void main()
{
	isArmstrong();  //fun call
}//main ends here
void isArmstrong()  //fun defination
{
	int start,end;
	printf("Enter range:");
	scanf("%d%d",&start,&end);
	
	for(int i=start;i<=end;i++)
	{   
		int no=i,count=0,sum=0;
		while(no!=0)
		{
			count++;
			no=no/10;
		}
		no=i;
	
		while(no!=0)
		{
		    int rem=no%10;
			sum=sum+pow(rem,count);
			no=no/10;
		}
		if(sum==i)
		    printf("%d\n",i);
	}
	
	
}