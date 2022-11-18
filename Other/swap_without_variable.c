#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    printf("Enter first integer:- ");
    scanf("%d", &a);
    printf("Enter second integer:- ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("The first number after swap is :- %d\nThe second number after swap is :- %d", a, b);
}
