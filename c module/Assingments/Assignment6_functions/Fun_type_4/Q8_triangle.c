#include<stdio.h>
int isType(int,int,int);
void main() {
	int s1,s2,s3;
	printf("Enter 3 sides :");
	scanf("%d%d%d",&s1,&s2,&s3);
	int res = isType(s1,s2,s3);
	if(res==1)
		printf("Equilateral");
	else if(res==2)
		printf("Isosceles");
	else
		printf("Scalen");
}
int isType(int s1,int s2,int s3) {
	if(s1==s2 && s2==s3)
		return 1;
	else if(s1==s2 || s1==s3 || s2==s3)
		return 2;
	else
	    return 3;
}