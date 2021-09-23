#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n=2,mul;
	clrscr();
	printf("table of declared number");
	while(i<=20)
		{
			mul=n*i;
			printf("\n2*%d=%d",i,mul);
			i++;
		}
getch();
}
