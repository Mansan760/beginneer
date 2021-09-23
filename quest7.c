//7. Write a program in C to display the n terms of harmonic series and their sum.
//	1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
#include<stdio.h>
#include<conio.h>
int main()
{
	float i,n,sum=0;
	printf("Enter upto where u want to calculate harmonic series:");
	scanf("%f",&n);
	printf("Harmonic series are:");
	for(i=1;i<=n;i++)
	{
		printf("\n1/%f",i);
		sum=sum+1/i;
	}
	printf("\nSum of harmonic series is %f",sum);
	getch();
}
