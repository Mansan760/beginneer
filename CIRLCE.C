#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	circle(300,250,200);
	circle(300,250,150);
	circle(300,250,100);
	getch();
}