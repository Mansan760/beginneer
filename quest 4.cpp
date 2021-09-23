//4. Write a program in C to read 10 numbers from keyboard and find their sum and average.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a=0,sum=0,average;
	for(i=1;i<=10;i++)
		{
			printf("Enter the no:");
			scanf("%d",&a);
			sum=sum+a;
		}
	printf("\nSum of nth term of natural numbers is: %d",sum);
	average=sum/2;
	printf("\nAverage of sum of nth terms of natural numbers is: %d",average);
	getch();
}
