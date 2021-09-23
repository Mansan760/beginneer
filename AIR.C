#include<stdio.h>
#include<conio.h>
void main()
{
	int air;
	clrscr();
	printf("Enter the Air Quality Health Index:");
	scanf("%d",&air);
	if (air>=1 && air<=3)
		{
			printf("U have low Air Quality Health");
		}
	else if (air>=4 && air<=6)
		{
			printf("u have Moderate Air Quality Health");
		}
	else if (air>=7 && air<=10)
		{
			printf("U have High Air Quality Health");
		}
	else if (air>10)
		{
			printf("U have very high Air Quality Health");
		}
	else
		{
			printf("Please Enter higher than 0 cuz u would been dead if it was 0");
		}
getch();
}
