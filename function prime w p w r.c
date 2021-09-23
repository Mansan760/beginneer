#include<stdio.h>
#include<conio.h>

int prime(int);

int main()
{
	int pri,num;
	printf("Enter the number u want to check as prime number");
	scanf("%d",&num);
	pri=prime(num);
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
int prime(a)
{
	int count=0,i=0;
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}
	return count;
}
