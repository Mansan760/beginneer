#include<stdio.h>
#include<conio.h>
int main()
{
	int marks;
	printf("Enter your average marks");
	scanf("%d",&marks);
	if(marks>=0 && marks<39)
	{
		printf("\nYour average garde is E");
	}
		else if(marks>=40 && marks<49)
	{
		printf("\nYour average garde is D");
	}
		else if(marks>=50 && marks<=59)
	{
		printf("\nYour average garde is C");
	}
		else if(marks>=60 && marks<=79)
	{
		printf("\nYour average garde is B");
	}
		else if(marks>=80 && marks<=100)
	{
		printf("\nYour average garde is A");
	}
	else
	{
		printf("\nPlease Enter number between 0 to 100");
	}
	getch();
}
