#include<stdio.h>
#include<conio.h>

int power();
int main()
{
	int answer;
	answer=power();
	printf("\nThe powered answer of given number is %d",answer);
	getch();
}

int power()
{
	int mul=1,i=0,p,num;
	printf("Enter the number u want to power up");
	scanf("%d",&num);
	printf("\nEnter the power");
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		mul=mul*num;
	}
	return mul;
}

