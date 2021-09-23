#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int x=10;
	FILE *p;
	p=fopen("C:\\Users\\ok.txt","w+");
	if(p==NULL)
	{
		printf("NO file was created");
		exit(0);
	 }
	fprintf(p,"%d",x);
	fclose(p);
	getch();
}