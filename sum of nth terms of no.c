//3. Write a program in C to display n terms of natural number and their sum
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n=0,sum=0;
	printf("Enter the terms of number:");
	scanf("%d",&n);
	printf("The nth term of natural numbers are:");
		for(i=1;i<=n;i++)
	{
		printf("\n%d",i);
		sum=sum+n;
		
	}
	printf("\nSum of nth term of natural numbers is: %d",sum);
	getch();
}
