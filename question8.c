//8. Write a program in C to print the Floyd's Triangle.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			if(j%2==0)
			{
			printf("0\t");
			}
			else
			{
				printf("1\t");
			}
		}
		printf("\n");
	}
	getch();
}
