#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;
	clrscr();
	printf("Affno marks leknus:");
	scanf("%d",&marks);
	if(marks>=0 && marks<32)
		{
			printf("\nFail vaya ni better luck next time");
		}

	else if(marks>=32 && marks<40)
		{
			printf("\nLu aba chai garo xa D ayaxa hai");
		}
	else if(marks>=40 && marks<50)
		{
		printf("\nPubg ley garda C matra ayaxa hai ki tiktok ley?");
		}
	else if(marks>=50 && marks<60)
	{
		printf("\nTry gardai garnus C+ ayani dhuki nah hum");
	}
	else if(marks>=60 && marks<70)
	{
		printf("\nNot bad huh B");
	}
	else if(marks>=70 && marks<80)
	{
		printf("\nVery Good B+ yestai pargati garnu");
	}
	else if(marks>=80 && marks<90)
	{
		printf("\nHait A handey ko");
	}
	else if(marks>=90 && marks<=100)
	{
		printf("\nWah topper A+");
	}
	else
	{
		printf("\nPlease feri marks check gari hanus 100 vanda kaam");
	}
getch();
}