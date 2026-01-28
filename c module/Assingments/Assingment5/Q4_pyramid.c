#include<stdio.h>
void main()
{
	int n=5;
	for(int i=1;i<=n;i++)
	{
		for(int k=n;k>i;k--)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}



//void main() {
//	int n=6;
//	int count=n;
//	for(int i=1; i<=n; i++) {
//
//		for(int k=1; k<count; k++) {
//			printf(" ");
//		}
//		count--;
//		for(int j=1; j<=i; j++) {
//
//			printf("* ");
//		}
//		printf("\n");
//	}
//}

