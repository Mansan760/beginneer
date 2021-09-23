#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	char str[]="Rectangle";
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	line(30,230,150,150);
	line(30,230,150,300);
	line(600,230,500,150);
	line(500,300,600,230);
	outtextxy(300,230,str);
	rectangle(150,150,500,300);
	getch();
	closegraph();
}