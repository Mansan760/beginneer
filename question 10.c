//10. WAP to find whether a given number is prime or not.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,num=0,count=0;
	printf("Enter a number\t");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			count=count+1;
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
	return 0;
}
