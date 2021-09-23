//12. Write a C program to display Pascal's triangle.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
		for(k=5-i;k>=1;k--)
		{
			printf(" ");
		}
		int v=1;
		int num=i;
		int den=1;
		for(j=0;j<=i;j++)
		{     
		   	printf("%d ", v);
		   	v=v*num;
			v=v/den;
			num--;
			den++;       	
	    }
		printf("\n");
	}
	getch();
}
