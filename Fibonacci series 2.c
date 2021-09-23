#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[20],i=0,sum=0;
	printf("Enter the number upto where u want fibonacci");
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
	printf("%d,",a[0]);
	for(i=0;i<n;i++)
	{
		a[i]=a[i]+a[i-1];
		printf("%d,",a[i]);
	}
	getch();
}
