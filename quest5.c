//5. Write a C program to calculate the factorial of a given number.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,mul;
	printf("Enter the no u want to factorial of:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		mul=mul*i;
	}
	printf("Factorial of given no is %d",mul);
	getch();
	
}
