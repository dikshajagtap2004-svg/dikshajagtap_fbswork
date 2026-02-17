#include<stdio.h>
void table(int);  //fun declaration
void main()
{
	int no;
	printf("Enter no for table :");
	scanf("%d",&no);
	table(no); //fun call
}//main ends here
void table(int no)  //fun defination
{
	int i=1;
	while(i<=10)
	{
		printf("%d ",i*no);
		i++;
	}
}