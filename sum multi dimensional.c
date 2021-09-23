#include<conio.h>
#include<stdio.h>
int main()
{
	int a[4][3]={{4,2,3},
				 {6,7,8},          
				 {2,5,1},          
				 {8,7,0}};         
	int	b[4][3]={{9,6,4},
				 {6,3,2},
				 {2,5,7},
				 {4,6,9}};
	int i=0,j=0,sum[4][3];			  	
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d,",sum[i][j]);
		}
		printf("\n");
	}
 getch();		
}
