#include<stdio.h>
#include<conio.h>

int prime();

int main()
{
	int pri;
	pri=prime();
	if(pri==1)
	{
		printf("It's a prime number");
	}
	else
	{
		printf("It's not a prime number");
	}	
	getch();  
	
}
int prime()
{
	int count=0,i=0,num;
	printf("Enter the number u want to check as prime number");
	scanf("%d",&num);;
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	return count;
}
