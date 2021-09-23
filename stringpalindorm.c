#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char  a[30]="Heheboi",b[30];
	b[30]=a[30];
	strrev(a);
	if(strcmp(a,b)==0)
	{
		printf("It's palindrome");
	}
	else
	{
		printf("its not a palindrome");
	}
	getch();
}
