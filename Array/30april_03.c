//
#include <stdio.h>

void main()
{
    char i = 'A';
    float k = 2.36;
    int m = 25;
    void *n;
    n = &i;
    printf("%c\n", *((char *)n));
    n = &k;
    printf("%.2f\n", *((float *)n));
    n = &m;
    printf("%d\n", *((int *)n));
}