#include<stdio.h>
#include<conio.h>

void palin(int);
int main()
{
	int num=0;
	printf("Enter the number u want to check as palindrome");
	scanf("%d",&num);
	palin(num);
	getch();
	
}
	void palin(int a)
	{
		int result=0,r,temp=0;
		temp=a;
		while(a!=0)
		{
		r=a%10;
		result=result*10+r;
		a=a/10;
		}
			if(temp==result)
	{
		printf("It's a palindrome");
	}
	else
	{
		printf("It's not a palindrome");
		
	}
	}
	
