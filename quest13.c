//13. Write a program in C to display the first n terms of Fibonacci series.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,i,n,sum;
	printf("\nenter any number: ");
	scanf("%d",&n);
	printf("\nthe fibonacci series upto %d terms: ",n);
	printf("%d\t%d\t",a,b);
	for(i=1;i<=n-2;i++)
	{
		sum=a+b;
		a=b;
		b=sum;
		printf("%d\t",sum);
	}
	getch();
}


