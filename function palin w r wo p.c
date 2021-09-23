#include<stdio.h>
#include<conio.h>
int comp();
int palin();
int main()
{
	
	int sum,temp;
	temp=comp();
	sum=palin();
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
	int comp()
	{
		int number;
		printf("\Enter the number u want to check as palindrome");
		scanf("%d",&number);
		return number;
	}
	int palin()
	{
		int result=0, num=0,r;
		printf("\nEnter the same previous number u want to check as palindrome");
		scanf("%d",&num);
		while(num!=0)
		{
		r=num%10;
		result=result*10+r;
		num=num/10;
		}
		return result;
	}
	
