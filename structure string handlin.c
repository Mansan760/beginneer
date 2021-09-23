#include<stdio.h>
#include<conio.h>
#include<string.h>
struct record
{
	char name[20];
	int id;
	int salary;
	char department[20];
};
int main()
{
	int i=0,j=0,n;
	char depart[20];
	printf("\nPlease enter number of detail u want to enter");
	scanf("%d",&n);
	struct record a[n],temp;
	printf("\nPlease enter everyones detail:");
	for(i=0;i<n;i++)
	{
		printf("\nPlease enter %d person name",i+1);
		scanf("%s",a[i].name);
		printf("\nPlease enter id of %d person",i+1);
		scanf("%d",&a[i].id);
		printf("\nPlease enter the salary of %d person",i+1);
		scanf("%d",&a[i].salary);
		printf("\nPlease enter %d person's department",i+1);
		scanf("%s",a[i].department);
	}
	for(i=0;i<n;i++)
	{
		strupr(a[i].department);
	}
	printf("\nPlease enter the department u want to search");
	scanf("%s",&depart);
	strupr(depart);
	for(i=0;i<n;i++)
	{
		if (strcmp(a[i].department,depart)==0)
		{
			printf("\nThe person name is %s",a[i].name);
			printf("\nThe person id is %d",a[i].id);
			printf("\nThe person's salary is %d",a[i].salary);	
			printf("\nThe person's department is %s",a[i].department);
		}
		else
		{
				printf("\nPlease enter the name u want to search properly");	
		}
	}

	getch();
}
