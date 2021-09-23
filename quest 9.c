//9.Write a program to print a diamond pattern.
#include<stdio.h>

int main(){
	int i,j,k;
	for(i=1;i<=7;i=i+2)
	{
		for(k=i;k<7;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("  ");
	for(i=5;i>=1;i=i-2)
	{
		for(k=5;k>i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n  ");
	}
	
	return 0;
}
