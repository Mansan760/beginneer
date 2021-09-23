#include<stdio.h>
#include<conio.h>
int main()
{
		int i,j,k;
		for(i=5;i>=1;i--)
		{				
				for(j=i;j<=4;j++)
				{
					printf("\t");
				}
			for(k=1;k<=i;k++)
				{
					printf("*\t");
				
				}
			printf("\n");	
		}
getch();		
}


