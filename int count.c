#include <stdio.h>
#include <conio.h>
int main()
{
	int n,rev,r,count=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		printf("\n%d",r);
		count=count+1;
		n=n/10;
	}
	printf("\nNo of digits %d",count);
	getch();
}
