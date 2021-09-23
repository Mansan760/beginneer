#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum,sub,div,por,choice;
	clrscr();
	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tMENU");
	printf("\n\t\t\t\t*******************");
	printf("\n\t\t\t\t1)ADD\n\t\t\t\t2)Sub\n\t\t\t\t3)Division\n\t\t\t\t4)Product");

	printf("\n\t\t\tEnter 1 numbers:");
	scanf("%d",&a);
	printf("\n\t\t\tenter the 2 number:");
	scanf("%d",&b);
	printf("\n\t\t\tEnter the choice:");
	scanf("%d",&choice);
	if(choice==1)
		{
				sum=a+b;
				printf("The result of sum of two number=%d",sum);
		}
	else if(choice==2)
		{
			sub= a-b;
			printf("The result of subtraction of two number=%d",sub);
		}
	else if(choice==3)
		{
			div= a/b;
			printf("The result of division of two number=%d",div);
		}
	else if(choice==4)
		{
			por=a*b;
			printf("The result of multiplication of two number=%d",por);
		}
	else
		{
			printf("enter less than or equal to 4");
		}
getch();
}


