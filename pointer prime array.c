#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0,n=0,count=0,pri;
	printf("Enter the number upto where u want to check prime number:");
	scanf(" %d",&n);
	int prime[n];
	prime[0]=1;
	prime[1]=2;
	printf("The number of prime numbers are:");
	printf("%d,",prime[0]);
	for(i=2;i<=n;i++)
	{
		pri=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				pri=0;
			}
			else
			{
				pri=1;
				count=count+1;
			}
		}
		printf("The number prime numbers are %d",count);
			if(pri==1)
			{
				prime[i]=i;
				printf("%d,",prime[i]);
			}
			
	}
	getch();
}
