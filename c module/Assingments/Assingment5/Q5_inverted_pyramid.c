#include<stdio.h>
void main()
{
	int n=5;
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<i;k++)
		{
			printf(" ");
		}
		for(int j=5;j>=i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
}



//void main()
//{
//	int n=5;
//	int count=1;
//	for(int i=5;i>=1;i--)
//	{
//		for(int k=1;k<count;k++)
//		{
//			printf(" ");
//		}
//		count++;
//		for(int j=1; j<=i;j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//}

