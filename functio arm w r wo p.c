#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int Armstrong();
int main()
{
	int armnum;
	armnum=Armstrong();
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
int Armstrong()
{
 	int result=0,i=0,count=0,r,temp,b,num;
 	printf("Enter the no u want to check as armstrong");
	scanf("%d",&num);
 	temp=num;
 	b=num;
 	while(num!=0)
	{
		if(num!=0)
		{
			count++;
			num=num/10;
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
