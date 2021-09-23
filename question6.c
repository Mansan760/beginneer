//6. Write a program in C to display the n terms of even natural number and their sum.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,sum,n;
	printf("Enter upto where u want to see even numbers");
	scanf("%d",&n);
	printf("The even numbers are:");
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
			sum=sum+i;
		}
	}	
		printf("\nThe sum of given terms of even number is %d",sum);
		getch();
}
