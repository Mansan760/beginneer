
#include<stdio.h>
#include<conio.h>
int main()
{
	int a=0,b=0,i=0,j=0,sum=0,count=0;
	printf("Enter the number from where you want to sum prime number");
	scanf("%d\t%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		count=0;
		for(j=2;j<=b;j++)
		if(i%j==0)
		{
			count++;
		}
			if(count==1)
		{
			sum=sum+i;
		}
	}
	
	printf("The sum of prime numbers is %d ",sum);
	return 0;
}
