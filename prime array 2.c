#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],m=2,n,i=0,j=0,count=0;
	a[0]=0;
	a[1]=1;
	printf("Enter upto which number u want to check prime numbers");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{	
		count=0;
		for(j=2;j<=i;j++)
		{
			
			if(i%j==0)
			{
				count++;
			}
		}
			if(count==1)
			{
				a[m]=i;
				m++;
			}
		
	}
	for(i=0;i<=m;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}
