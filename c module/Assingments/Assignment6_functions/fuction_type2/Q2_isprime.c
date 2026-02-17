#include<stdio.h>
int isPrime(); //fun declaration
void main()
{  
    //call
	isPrime()?printf("prime"):printf("not prime");
	
}//main ends here
int isPrime()  //fun defination
{
	int no;
	printf("Enter number :");
	scanf("%d",&no);
	
	for(int i=2;i<no;i++)
	{
		if(no%i==0)
		return 0;
	}
	  return 1;

}