
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int Armstrong(int);
int main()
{
	int num,x,armnum;
	printf("Enter the no u want to check as armstrong");
	scanf("%d",&num);
	armnum=Armstrong(num);
	if(armnum==1)
	{
		printf("It's an Armstrong number");
	}
	else
	{
		printf("It's not an armstrong number");
	}
	getch();
}
int Armstrong(int a)
{
 	int result=0,i=0,count=0,r,temp,b;
 	temp=a;
 	b=a;
 	while(a!=0)
	{
		if(a!=0)
		{
			count++;
			a=a/10;
		}	
	}
	while(b!=0)
	{
		r=b%10;
		result=result+pow(r,count);
		b=b/10;
	}
	if(result==temp)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
