#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("Enter first integer:- ");
    scanf("%d", &a);
    printf("Enter second integer:- ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("The first number after swap is :- %d\nThe second number after swap is :- %d", a, b);
}
