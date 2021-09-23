//13. Write a program in C to display the first n terms of Fibonacci series.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,n=0;
	printf("\nenter any number: ");
	scanf("%d",&n);
	int sum[n];
	sum[0]=0;
	sum[1]=1;
	printf("\nthe fibonacci series upto %d terms: ",n);
	printf("\t%d\t%d\t",sum[0],sum[1]);
	for(i=2;i<=n;i++)
	{
		sum[i]=sum[i-1]+sum[i-2];
		printf("%d\t",sum[i]);
	}
	getch();
}


