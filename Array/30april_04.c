//
#include <stdio.h>
void swap(int *x, int *y);
void main()
{
    int a = 10;
    int b = 20;
    int *ptr = &a;

    printf("Before swap a = %d and b= %d\n", a, b);
    swap(&a, &b);
    printf("After swap a= %d and b= %d\n", a, b);
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}