#include<stdio.h>
#include<string.h>
typedef struct Student
{
	int id;
	char name[20];
	float marks;
}Student;
void add(int* count,Student* arr);
void display(int count ,Student* arr);
void update(int count,Student* arr);
void deleteStud(int count,Student* arr);
void main()
{
	Student arr[5];
	int count =0;
	int ch;
	do
	{
		printf("\n1. Add student");
		printf("\n2. Display all student");
		printf("\n3. Update student");
		printf("\n4. Delete student");
		printf("\n5. Exit");
		
		
		printf("\nEnter choice :");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				{   if(count<5)
				    {
				    	add(&count,arr);
					}
				    else
				    {
				    	printf("array is full");
					}
					
					break;
				}
			case 2:
				{
					display(count,arr);
					break;
				}
			case 3:
				{
					update(count,arr);
					break;
				}
			case 4:
			    {
				    deleteStud(count,arr);
				    break;
			    }
			case  5:
				{
					printf("program is exiting..");
					break;
				}
			default:{
				
				printf("Enter valid choice");
			}
		}
		}while(ch!=5);
	    
	}


void add(int* count,Student* arr)
{    
	printf("Enter student details :");
	printf("id:");
	scanf("%d",&arr[*count].id);
	printf("enter name:");
	scanf("%s",&(arr[*count].name));
	printf("Enter marks:");
	scanf("%f",&arr[*count].marks);
	*count = (*count)+1;
	
}

void display(int count ,Student* arr)
{   printf("student details :\n");
	for(int i=0;i<count;i++)
	{
		printf("\nid: %d",arr[i].id);
		printf("\nname: %s",arr[i].name);
		printf("\nmarks: %f",arr[i].marks);
	}
}

void update(int count,Student* arr){
	int id;
	printf("Enter id to update :");
	scanf("%d",&id);
	int flag =0;
	for(int i =0;i<count;i++)
	{
		if(id==arr[i].id)
		{   flag =1;
			printf("Enter updated name :");
			scanf("%s",&arr[i].name);
			printf("Enter updated marks: ");
			scanf("%f",&arr[i].marks);
			return;
		}
	}
	if(flag==0)
	printf("Student not  found");
	
}

void deleteStud(int count,Student* arr)
{
	int id;
	printf("Enter id :");
	scanf("%d",&id);
	int flag =0;
	for(int i =0;i<count;i++)
	{
		if(id==arr[i].id)
		{    flag =1;
			for(int j=i+1; j<count;j++)
			{
				arr[j-1].id=arr[j].id;
				strcpy(arr[j-1].name,arr[j].name);
				arr[j-1].marks=arr[j].marks;
			}
		}
	}
	if(flag==0)
	printf("Student not  found");
}

