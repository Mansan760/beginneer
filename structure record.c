#include<stdio.h>
#include<conio.h>
struct record
{
	char name[20];
	int age;
	char address[20];
	double phone;
}temp;
int main()
{
	int n,i=0,j;
	printf("Enter the number of people");
	scanf("%d",&n);
	fflush(stdin);
	struct record a[10];
	printf("\nEnter the details");
	for(i=0;i<=n;i++)
	{
		printf("%d Name",i+1);
		gets(a[i].name);
		fflush(stdin);
		printf("%d Age",i+1);
		scanf("%d",a[i].age);
		fflush(stdin);
		printf("%d Address",i+1);
		gets(a[i].address);
		fflush(stdin);
		printf("%d Phone Number",i+1);
		scanf("%lf",a[i].phone);
		fflush(stdin);
	}
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(strcmp(a[i].name,a[j].name)>0)
			{
				temp=a[i];	
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nDetail of aged more than 25");
	for(i=0;i<n;i++)
	{
		if(a[i].age>25)
		{
			printf("\nName");
			puts(a[i].name);
			printf("\nAge %d",a[i].age);
			printf("phone %lf",a[i].phone);
		}
	}
	getch();
}
