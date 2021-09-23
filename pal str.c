#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,r=0,num,temp=0,sum=0;
	printf("Enter the number you want to check as palindrome");
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
		printf("\nIt's palindrome number");
	}
	else
	{
		printf("\nIt's not a palindrome number");
	}
	getch();
}
