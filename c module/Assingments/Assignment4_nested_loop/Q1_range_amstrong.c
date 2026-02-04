#include<stdio.h>
void main() {
	int range;
	printf("Enter the range :");
	scanf("%d",&range);
	int no;
	for(int   i=1; i<=range; i++) {
		int sum=0;
//		printf("\n no =%d ",i);
		int count=0;
		no=i;
		while(no!=0) {
			count++;
			no=no/10;
		}
//		printf("\ncoount= %d",count);

		no=i;
//		printf("no =%d",no);
		while(no!=0) {
			int rem=no%10;
//			printf("\n rem =%d",rem);
			int res=1;
			for(int j=1; j<=count; j++) {
				res=res*rem;
//				printf("\n res =%d",res);
			}
			sum=sum+res; 
			no=no/10;
		}
		if(sum==i)
		printf("\n%d",i);
	}
}








