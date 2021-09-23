#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j;
	clrscr();
	printf("ASCII value from a to z characters:");
	for(i='a';i<='z';i++)
	{
		printf("\t%c=%d",i,i);
	}
	printf("\nASCII value from A to Z characters:");
	for(j='A';j<='Z';j++)
	{
		printf("\t%c=%d",j,j);
	}
	getch();
}
