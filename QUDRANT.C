

#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("Enter two number to in which quadrant they lie:");
	scanf("%d%d",&x,&y);
	if(x>0 && y>0)
		{
			printf("It lies on first quadrant");
		}
	else if(x<0 && y>0)
		{
			printf("It lies on second quadrant");
		}
	else if(x<0 && y<0)
		{
			printf("It lies on third quadrant");
		}
	else if(x>0 && y<0)
		{
			printf("It lies on fourth quadrant");
		}
	else
		{
			printf("It origin");
		}
getch();
}