#include<stdio.h>
#include<conio.h>
#include<math.h>

float SI();
float CI();
int main()
{
	float Sinterest,Cinterest;
	Sinterest=SI();
	Cinterest=CI();
	printf("\nThe Simple Interest is %f",Sinterest);
	printf("\nThe Compound Interest is %f",Cinterest);
	getch();
}
float SI()
{
    float a,b,c,si;
	printf("\nEnter principal,time,rate");
	scanf("%f%f%f",&a,&b,&c);
	si=(a*b*c)/100;
	return si;
}
float CI()
{	
	float x,y,z,ci;
	printf("\nEnter principal,time,rate");
	scanf("%f%f%f",&x,&y,&z);
	ci=x*(pow(1+(z/100),y));
	return ci;
}
