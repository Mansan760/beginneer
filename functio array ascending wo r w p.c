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
	int a,i=0,j=0;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(m[i]<m[j])
			{
				a=m[i];
				m[i]=m[j];
				m[j]=a;
			}
		}
	}
	printf("\nThe descending form is:");
	for(i=0;i<10;i++)
	{
		printf("%d\t",m[i]);
	}
	
}		
