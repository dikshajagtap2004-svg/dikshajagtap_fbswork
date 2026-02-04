#include<stdio.h>
void main() {
	int range;
	printf("Enter range :");
	scanf("%d",&range);

	for(int i=1; i<=range; i++) 
	{
		int sum=0;
		for(int j=1; j<i; j++) 
		{
			if(i%j==0)
				sum=sum+j;
		}
		if(sum==i)
			printf("%d\n",i);

	}
}





