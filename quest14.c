//14. Write a program in C to find the number and sum of all integer between 100 and 200 which are divisible by 9.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,sum;
	for(i=100;i<=200;i++)
	{
		if(i%9==0)
		{
			sum=sum+i;
		}
	}
	printf("The sum of all 100 to 200 divisible by 9 is %d",sum);
	getch();
	
}
