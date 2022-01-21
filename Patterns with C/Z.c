#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, in1;
    printf("Enter any number:- ");
    scanf("%d", &in1);
    for (i = 1; i <= in1; i++)
    {
        for (j = 1; j <= in1; j++)
        {
            if (i == 1 || i == in1 || (i + j == in1 + 1))
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
}
