// To print pointers
#include <stdio.h>

void main()
{
    int abhi = 5;
    int *anu = &abhi;
    printf("%d\n", abhi);
    printf("%p\n", &abhi);
    printf("%p\n", anu);
}