#include<stdio.h>
void main()
{
	int range=100;
	int status;
	for(int i=2;i<=range;i++)
	{
		status=1;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				status=0;
				break;
			}
		}
		if(status==1)
		   printf("%d, ",i);
	}
			
}

