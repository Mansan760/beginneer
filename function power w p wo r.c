#include<stdio.h>
#include<conio.h>

void power(int,int);
int main()
{
	int num,p;
	printf("Enter the number u want to power up");
	scanf("%d",&num);
	printf("\nEnter the power");
	scanf("%d",&p);
	power(num,p);
	getch();
}

void power(int x, int y)
{
	int mul=1,i=0;
	for(i=0;i<y;i++)
	{
		mul=mul*x;
	}
	printf("\nThe powered answer of given number is %d",mul);
}

