#include<stdio.h>
int isCheck(int);
void main() {
	int no;
	printf("Enter no :");
	scanf("%d",&no);
	
	int res = isCheck(no);
	if(res==1)
		printf("divisible by 3 and 5");
	else if(res==2)
		printf("divisible by 3 not by 5");
	else if(res==3)
		printf("divisible by 5 not by 3");
	else
		printf("not divisible by both ");
}
int isCheck(int no) {
	if(no%3==0 && no%5==0)
		return 1;
	else if(no%3==0 && no%5!=0)
		return 2;
	else if(no%5==0 && no%3!=0)
		return 3;
	else
		return 4;
}