#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	char x[20],y[20];
	gets(x);
	FILE *p;
	p=fopen("C:\\TurboC3\\ok.txt","w+");
	if(p==NULL)
	{
		printf("\nFile is not opening due to some error");
		exit(0);
	}
	else
	{
		fputs(x,p);
	}
	if(fgets(y,20,p)!=NULL)
	{
		puts(y);
	}
	
	fclose(p);
	getch();
}
