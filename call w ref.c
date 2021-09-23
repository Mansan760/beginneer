#include<stdio.h>
#include<conio.h>
void swap(int * ,int *);
int main()
{
	int a,b;
	printf("Enter the value of two number");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	getch(); 
}

void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("The swaped value of x and y are %d and %d",*x,*y);
	
}
