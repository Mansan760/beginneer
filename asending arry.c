// WAP to sort an array
#include<stdio.h>



int main()
{
int i=0,j=0,temp=0,count;
printf("Enter how many numbers u want to see");
scanf("%d",&count);
int a[count];
printf("Give values\n");
for(i=0;i<=count-1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=count;i++)
{
for(j=i+1;j<=count;j++)
{
temp=a[i];
if(temp > a[j])
{
a[i] = a[j];
a[j] = temp;
}
}
printf("%d\t",a[i]);
}

getch();
}

	
