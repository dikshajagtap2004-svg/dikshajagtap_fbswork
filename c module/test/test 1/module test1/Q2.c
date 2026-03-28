#include<stdio.h>
void main()
{
	int n;
	printf("Enter the range to print(1+11+...)series: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",1);
		}
		if(i!=n)
		printf("%c",'+');
		
	}
}


