#include<stdio.h>
#include<conio.h>
#include<math.h>

float SI(float,float,float);
float CI(float,float,float);
int main()
{
	float p,t,r,Sinterest,Cinterest;
	printf("Enter principal,time,rate");
	scanf("%f%f%f",&p,&t,&r);
	Sinterest=SI(p,t,r);
	Cinterest=CI(p,t,r);
	printf("The Simple Interest is %f",Sinterest);
	printf("The Compound Interest is %f",Cinterest);
	getch();
}
float SI(float a,float b,float c)
{
	float si;
	si=(a*b*c)/100;
	return si;
}
float CI(float x,float y,float z)
{
	float ci;
	ci=x*(pow(1+(z/100),y));
	return ci;
}
