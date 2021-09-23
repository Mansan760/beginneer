#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n=2,mul;
	clrscr();
	printf("table of declared number");
	for(i=1;i<=10;i++)
		{
			mul=n*i;
			printf("\n2*%d=%d",i,mul);
		}
getch();
}
