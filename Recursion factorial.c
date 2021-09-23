#include<stdio.h>
#include<conio.h>
int factor(int);
int main()
{
	int fact,number;
	printf("Enter the number upto where u want the factorial");
	scanf("%d",&number);
	fact=factor(number);
	printf("\nThe factorial of %d is %d",number,fact);
	getch();
}
int factor(int x)
{
	if(x!=0)
	{
		return x*factor(x-1);
	}
	else
	{
		return 1;
	}
}

