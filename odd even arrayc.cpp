#include<stdio.h>
#include<conio.h>
int main()
{
	int size=20;
	int a[size],n=0,i=0,evencount=0,oddcount=0;
	int even[size],odd[size];
	printf("\n Enter how many numbers you want to input");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			evencount++;
			even[i]=a[i];
		}
		else
		{
			oddcount++;
			odd[i]=a[i];
		}
	}
	printf("\n The odd values input by user is:");
	for(i=0;)
	printf("\nTotal even numbers=%d",evencount);
	printf("\nTotal odd numbers=%d",oddcount);
	getch();
}

