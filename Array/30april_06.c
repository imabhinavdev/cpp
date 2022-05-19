//
#include <stdio.h>

void main()
{
    int a, b, *p, c = 5;
    a = 4 * (c + 5);
    p = &c;
    b = 4 * (*p + 5);
    printf("%d is the value of a and %d is the value of b", a, b);
}