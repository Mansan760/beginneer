#include<stdio.h>
#include<conio.h>
void main()
{
	int SI,CI,SIAmount,P,T,R,choice;
	clrscr();
	printf("Enter Principal,time and rate");
	scanf("%d%d%d",&P,&T,&R);
	printf("\nCalculation twapai ley garna saknu huney\n1.Simple interest\n2.Compound Interest\n3.SIAmount");
	printf("\nKun calculation garney ho hanus:");
	scanf("%d",&choice);
	switch(choice)
		{
			case 1:
			SI=(P*T*R)/100;
			printf("Twapai ko Simple Interest %d",SI);
			break;

			case 2:
			CI=P*(1+R/100)^(T-1);
			printf("Twapai ko Compund Interest %d",SI);
			break;

			case 3:
			SI=(P*T*R)/100;
			SIAmount=P+SI;
			printf("Twapai ko SI Amount %d",SIAmount);
			break;

			default:
			printf("Herayara hanus 3 vanda kaam");
			break;
		  }
getch();
}