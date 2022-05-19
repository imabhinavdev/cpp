// Array size program
#include <stdio.h>

void main()
{
    int ary[2];
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter any number:- ");
        scanf("%d", &ary[i]);
    }
    printf("%d %d %d %d ", ary[1], ary[2], ary[3], ary[4]);
}