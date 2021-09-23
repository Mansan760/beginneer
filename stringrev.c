#include<stdio.h>
#include<conio.h>
void main()
{

	char a[8]="reinier",b[8];
	int i=0,j=0;
	clrscr();
	for(i='\0';i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}

	if(a[8]==b[j])
	{
		printf("\nit's palindrome");
	}
	else
	{
		printf("\nIt's not palindrome");
	}
	getch();
}
