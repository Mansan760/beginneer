
#include<stdio.h>
#include<conio.h>
int main()
{
	char i,j;
	printf("ASCII value of all characters:");
	for(i='a';i<='z';i++)
	{
		printf("\n%c=%d",i,i);
	}
	for(j='A';j<='Z';j++)
	{
		printf("\n\t%c=%d",j,j);
	}
	getch();
}
