#include <stdio.h>
#include<math.h>
int main() 
{
	int a,result=0,i=0,count=0,r,temp,b;
		printf("Enter the no u want to check as armstrong");
	scanf("%d",&a);
 	temp=a;
 	b=a;
 	while(a!=0)
	{
			count++;
			a=a/10;	
	}
	while(b!=0)
	{
		r=b%10;
		result=result+pow(r,count);
		b=b/10;
	}
	if(result==temp)
	{
			printf("It's an Armstrong number");
	}
	else
	{
			printf("It's not an armstrong number");
	}
	getch();
}
