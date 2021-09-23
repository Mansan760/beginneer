#include<stdio.h>
#include<conio.h>
struct record
{
	char name[20];
	int id;
	int salary;
};
int main()
{
	int i=0,j=0,n;
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
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;i<n;i++)
		{
			if(a[i].name<a[j].name)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nThe biggest alphabet person name is %s",a[0].name);
	printf("\nThe biggest alphabet person id is %d",a[0].id);
	printf("\nThe biggest alphabet person is %d",a[0].salary);
	getch();
}
