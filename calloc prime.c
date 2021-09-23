#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int m=0,n,i=0,j=0,count=0;
	int *p,*q;
	printf("Enter upto which number u want to check prime numbers");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	q=(int *)calloc(n,sizeof(int));
	printf("\nEnter the numbers u want to check as prime numbers");
		for(i=0;i<n;i++)
	{
		scanf("\n%d",p+i);
	}
		if(p==NULL)
	{
		printf("\nMemory is not allocated");
			exit(0);
	}
	
	for(i=0;i<=*(p+i);i++)
	{
		count=0;
		for(j=0;j<=*(p+i);j++)
		{
			if(*(p+i)%j==0)
			{
				count++;
			}
		}
			if(count==2)
			{
				*(q+m)=*(p+i);
				m++;
			}
}
	for(i=0;i<m;i++)
	{
		printf("\n%d",*(q+i));
	}
	getch();
}
