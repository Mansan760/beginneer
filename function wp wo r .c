#include<stdio.h>
#include<conio.h>
#include<math.h>

void SI(float,float,float);
void CI(float,float,float);
int main()
{
	float p,t,r;
	printf("Enter principal,time,rate");
	scanf("%f%f%f",&p,&t,&r);
	SI(p,t,r);
	CI(p,t,r);
	getch();
}
void SI(float a,float b,float c)
{
	float si;
	si=(a*b*c)/100;
	printf("\nThe Simple Interest is %f",si);
}
void CI(float x,float y,float z)
{
	float ci;
	ci=x*(pow(1+(z/100),y));
	printf("\nThe Compound Interest is %f",ci);
}
