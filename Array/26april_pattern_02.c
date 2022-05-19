#include <stdio.h>

void main()

{
    int num1, num2, space;
    printf("Enter any number:- ");
    scanf("%d", &num1);

    for (int i = 1; i <= num1; i++)
    {
        for (space = num1; space >= i; space--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}