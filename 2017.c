#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	line(200,200,150,150);
	line(200,200,500,500);
	line(30,230,150,150);
		getch();
	closegraph();
}
