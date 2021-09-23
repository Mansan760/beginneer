#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter character u want to convert");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
    	tolower(ch);
    	printf("%c",tolower(ch));	
	}
	else if(ch>='a'&&ch<='z')
    {
    	toupper(ch);
    	printf("%c",toupper(ch));	
	}
	else
	{
		printf("\nPlease enter a charater only");
	}
	getch();
}
