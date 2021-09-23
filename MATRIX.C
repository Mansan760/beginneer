#include<stdio.h>
#include<conio.h>
int main()
{
	int a[4][3],i=0,j=0;
	printf("Enter the matrix u want to calculate");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix u entered is:");
	printf("\n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}

	getch();
}
