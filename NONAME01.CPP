#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,sum,i;
	clrscr();
	printf("%d%d",&a,&b);
	for(i=0;i<=4;i++)
		{
			sum=a+b;
			a=b;
			b=sum;
		 }
getch();
}
