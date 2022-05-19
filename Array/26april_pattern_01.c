#include <stdio.h>

void main()
{
    int num1, num2;
    printf("Enter any number:- ");
    scanf("%d", &num1);
    int a = 5;

    for (int i = 1; i <= num1; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            printf("*");
        }
        printf("\n");
    }
}