//
#include <stdio.h>

void main()
{
    int num = 8;
    void *name_pointer;

    int *ptr = &num;
    *ptr = 9;
    printf("%d\n", num);
    // printf("%d\n", *(&ptr));
}