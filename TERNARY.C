#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,var;
	clrscr();
	printf("enter value of a,b and c:");
	scanf("%d%d%d",&a,&b,&c);
	var=(a>b) && (a>c) ? a : (b>c) ? b : c;
	printf("Greatest is %d",var);

	getch();
}