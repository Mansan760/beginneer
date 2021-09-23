#include<stdio.h>
#include<conio.h>
struct record
{
	char name[20];
	int id;
	int salary;
	long long int number;
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
		printf("\nPlease enter %d person phone number",i+1);
		scanf("%lld",&a[i].number);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;i<n;i++)
		{
			if(a[i].salary<a[j].salary)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nThe highest salary person name is %s",a[0].name);
	printf("\nThe highest salary person id is %d",a[0].id);
	printf("\nThe highest salary person is %d",a[0].salary);
	printf("\nThe highest salary person number is %||%d",a[0].number);
	getch();
}
