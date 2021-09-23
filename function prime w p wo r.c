#include<stdio.h>
#include<conio.h>

void prime(int);

int main()
{
	int num;
	printf("Enter the number u want to check as prime number");
	scanf("%d",&num);
	prime(num);
	getch();  
	
}
void prime(a)
{
	int count=0,i=0;
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}
	if(count==1)
	{
		printf("It's a prime number");
	}
	else
	{
		printf("It's not a prime number");
	}	
}
