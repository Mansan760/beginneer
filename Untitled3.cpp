#include<stdio.h>
#include<conio.h>

void descending(int x[]);
int main()

{
	int a[10],i=0;
	printf("Enter the number u want to check in descending form");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	descending(a);
	getch();
}

void descending(int m[])
{
	int i=0;
	for(i=0;i<10;i++)
	{
		if(m[i]>m[i+1])
		{
			m[i+1]=m[i];
		}
		else
		{
			m[i]=m[i+1];
		}
	}
	printf("\nThe descending form is:");
	for(i=0;i<10;i++)
	{
		printf("%d\t",m[i]);
	}
	
}		
