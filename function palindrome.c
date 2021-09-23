#include<stdio.h>
#include<conio.h>

int palin(int,int);
int main()
{
	int num=0,r,sum=0,temp=0;
	printf("Enter the number u want to check as palindrome");
	scanf("%d",&num);
	temp=num;
	sum=palin(num,r);
	if(temp==sum)
	{
		printf("It's a palindrome");
	}
	else
	{
		printf("It's not a palindrome");
		
	}
	getch();
	
}
	int palin(int a, int b)
	{
		int result=0;
		while(a!=0)
		{
		b=a%10;
		result=result*10+b;
		a=a/10;
		}
		return result;
	}
	
