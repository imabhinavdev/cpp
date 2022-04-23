#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, in1, spc, k;
    printf("Enter any number:- ");
    scanf("%d", &in1);
    spc = in1-1;
    for (i = 1; i <= in1; i++)
    {
        for (k = 1; k <= spc; k++) //to generate spaces
            printf(" ");

        for (j = 1; j <= in1; j++)
        {
            if (i == j || i > j)
                printf("* ");

            else
                printf(" ");
        }
        spc--;
        printf("\n");
    }
}
