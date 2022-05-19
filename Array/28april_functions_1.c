// Swaping using function
#include <stdio.h>
void swap(int num3, int num4)
{
    int x = num3;
    num3 = num4;
    num4 = x;
    printf("After swaping first number is %d and second is %d", num3, num4);
}

void main()
{
    int num1, num2;
    printf("Enter first number:- ");
    scanf("%d", &num1);
    printf("Enter second number:- ");
    scanf("%d", &num2);
    swap(num1, num2);
}