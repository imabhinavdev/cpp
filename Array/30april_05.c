// To print values of pointers.
#include <stdio.h>

void main()
{
    int a = 10;
    float b = 2.5, c = 3.6;
    double d = 2.366;
    char ch = 'A';
    printf("%d is stored at %u\n", a, &a);
    printf("%.2f is stored at %u\n", b, &b);
    printf("%.2lf is stored at %u\n", d, &d);
    printf("%.2c is stored at %u\n", ch, &ch);
}