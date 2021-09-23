#include<stdio.h>
#include<conio.h>
int main()
{
	int num=0,r,sum=0,temp=0;
	printf("Enter the number u want to check as palindrome");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		r=num%10;
		sum=sum*10+r;
		num=num/10;
	}
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
