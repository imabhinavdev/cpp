// Lowest number in array.
#include <stdio.h>

void main()
{
    int ary[5], check;
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter  marks :- ");
        scanf("%d", &ary[i]);
    }
    check = ary[0];
    for (int j = 0; j <= 4; j++)
    {
        if (ary[j] < check)
        {
            check = ary[j];
        }
    }
    printf("Lowest number :- %d", check);
}