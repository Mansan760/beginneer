#include<stdio.h>
#include<conio.h>
int main()
{
	int a[4][3],b[3][4],i=0,j=0,m=0,mul[10][10],sum=0;
	printf("\nEnter the matrix u want to calculate");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the second matrix u want to calculate");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			for(m=0;m<=3;m++)
			{
				sum=sum + a[i][m]*b[m][j];
			}
				mul[i][j]=sum;
				sum=0;	
		}
	}
	
	printf("The product of matries u entered is:");
	printf("\n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("\t%d",mul[i][j]);
		}
		printf("\n");
	}

	getch();
}
