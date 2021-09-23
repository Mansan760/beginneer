#include<stdio.h>
#include<conio.h>

int power(int,int);
int main()
{
	int answer,num,p;
	printf("Enter the number u want to power up");
	scanf("%d",&num);
	printf("\nEnter the power");
	scanf("%d",&p);
	answer=power(num,p);
	printf("\nThe powered answer of given number is %d",answer);
	getch();
}

int power(int x, int y)
{
	int mul=1,i=0;
	for(i=0;i<y;i++)
	{
		mul=mul*x;
	}
	return mul;
}

