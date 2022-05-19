//
#include <stdio.h>

void main()
{
    char ary[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter name:- ");
            scanf("%c", &ary[i][j]);
        }
    }
    printf("%c %c %c %c", ary[0][0], ary[0][1], ary[1][0], ary[1][1]);
}