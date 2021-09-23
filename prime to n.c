//10. WAP to find whether a given number is prime or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, num, prime;
    printf("Find prime numbers between 1 to : ");
    scanf("%d", &num);
	printf("All prime numbers between 1 to %d are:\n", num);
    for(i=2; i<=num; i++)
    {
        prime = 1; 

        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                prime = 0;
                break;
            }
        }
        if(prime==1)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
