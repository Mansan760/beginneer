#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,b,sum,sub,div,mul,choice,i=0;
	while(i==0)
	{
		printf("\n\nMenu");
		printf("\na.Add\nb.Sub\nc.Div\nd.Mul");
		printf("\nEnter two numbers:");
		scanf("%d%d",&a,&b);
		printf("\nEnter the choice you want:");
		scanf("%d",&choice);
			switch(choice)
			{
				case 1:
				sum=a+b;
				printf("\nThe sum is %d",sum);
				break;

				case 2:
				sub=a-b;
				printf("\nThe sub is %d",sub);
				break;

				case 3:
				div=a/b;
				printf("\nThe div is %d",div);
				break;

				case 4:
				mul=a*b;
				printf("\nThe mul is %d",mul);
				break;

				case 5:
				exit(1);

				default:
				printf("\nPlease between 1 to 5");
			}
	}
getch();
}
