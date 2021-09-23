#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i=0,num,temp=0;
	printf("Enter the number you want to check as palindrome");
	scanf("%d",&num);
	temp=strrev(num);
	if(temp==num)
	{
		printf("\nIt's palindrome number");
	}
	else
	{
		printf("\nIt's not a palindrome number");
	}
	getch();
}
