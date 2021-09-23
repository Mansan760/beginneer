#include<stdio.h>
#include<conio.h>

int Largest(int x[]);
int main()

{
	int a[10];
	int greatest,i=0;
	printf("Enter the number u want to check as largest");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	greatest=Largest(a);
	printf("The largest number is %d",greatest);
	getch();
}

int Largest(int m[])
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
	return m[i];
	
}
