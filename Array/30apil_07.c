//
#include <stdio.h>

void main()
{
    int num = 10, num1 = 5;
    int *p1 = &num, *p2 = &num1;
    int sum = *p1 + *p2;
    int product = *p1 * *p2;
    printf("sum is %d and product is %d", sum, product);
}