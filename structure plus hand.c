#include<stdio.h>
#include<conio.h>
struct record
{
	char name[10];
	int id;
	double phone;
}a[3],b[3];
int main()
{
	int i=0;
	FILE *fp;
	fp=fopen("mansan.txt","w+");
	if(fp==NULL)
	{
		printf("\nFile not opened");
		exit(0);
	}
	if(i=0;i<=2;i++)
	{
		printf("\nEnter the name of %d person",i+1);
		fgets(a[i].name,10,stdin);
		fflush(stdin);
		printf("\nEnter the id of %s person",a[i].name);
		scanf("%d",&a[i].id);
		fflush(stdin);
		printf("\nEnter the phone number of %s person",a[i].name);
		scanf("%lf",&a[i].phone);
		fflush(stdin);
	}
	fwrite(&a,sizeof(a),1,fp);
	fclose(fp);
	fp=fopen("mansan.txt","r");
	if(fp==NULL)
	{
		printf("\nFile not opened");
		exit(0);
	}
	fread(&b,sizeof(b),1,fp);
	printf("\nAll the data are:");
	for(i=0;i<=2;i++)
	{
		printf("\n Name = %s \n ID = %d \n Phone No. = %lf",b[i].name,b[i].id,b[i].phone);	
	}
	
