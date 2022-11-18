#include <stdio.h>
#include <conio.h>
void main()
{
    float fact = 1, i,n;

    printf("Enter any number:-  ");
    scanf("%f", &n);
    for (i = n; i >= 1; i--)
        fact = fact * i;

    printf("The factorial of %.1f is %.1f",n, fact);
}
