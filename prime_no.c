#include <stdio.h>

#include <conio.h>

void main()
{
    int n1, i;
    printf("Enter any number two check that it's a prime number or not:- \t");
    scanf("%d", &n1);
    for (i = 2; i < n1; i++)
        if (n1 % i != 0)
        {
            printf("The number is prime");
            break;
        }

        else
        {
            printf("The number is not prime");
            break;
        }
}
