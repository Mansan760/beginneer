//2. Write a C program to find the sum of first 10 natural numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,sum=0;
		for(i=1;i<=10;i++)
	{
			sum=sum+i;
	}
	printf("The sum of first ten natural numbers are: %d",sum);
	getch();
}
