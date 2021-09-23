#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	flag:
	printf("Enter the char you want to convert");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	{
		printf("\nThe given character is lower case");
		ch=ch-32;
		printf("\nThe upper case of given character is %c",ch);
	}
	else if(ch>='A'&&ch<='Z')
	{
		printf("\nThe given character is upper case");
		ch=ch+32;
		printf("\nThe lower case of given character is %c",ch);
	}
	else
	{
		printf("\nplease enter alphabet");
		goto flag;	}
	getch();
	
	
}
