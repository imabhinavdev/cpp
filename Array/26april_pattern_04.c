#include <stdio.h>

void main()

{
    int num1, num2, space;
    printf("Enter any number:- ");
    scanf("%d", &num1);

    for (int i = 1; i <= num1; i++)
    {

        for (int j = 1; j <= (2 * num1) - 1; j++)
        {
            if (j >= num1 - (i - i) && j <= num1 + (i - 1))
                printf(" *");
            else
                printf(" ");
        }
        printf("\n");
    }
}