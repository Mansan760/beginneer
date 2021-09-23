#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,space,uppercase,lowercase,symbols,vowels,consonants;
	char a[30];
	printf("Enter alphabet or word or sentence");
	gets(a);
	for(i=0;i!='\0';i++);
	{
		if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z')||(a[i]==' '))
		{
			if(a[i]>=65&&a[i]<=90)
			{
				uppercase++;
			}
			else if(a[i]>=97&&a[i]<=122)
			{
				lowercase++;
			}
			else if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
			{
				vowels++;
			}
			else if(a[i]=' ')
			{
				space++;
			}
			else
			{
				consonants++;
			}
		}
		else
		{
			symbols++;
		}
		printf("Number of uppercase:%d",uppercase);
		printf("\nNumber of lowercase:%d",lowercase);
		printf("\nNumber of symbols:%d",symbols);
		printf("\nNumber of vowels:%d",vowels);
		printf("\nNumber of space:%d",space);
		printf("\nNumber of consonants:%d",consonants);
	}
	getch();
}

