// Sum of array
#include <stdio.h>

void main()
{
    int ary[5], total = 0;
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter  marks :- ");
        scanf("%d", &ary[i]);
        total = total + ary[i];
    }
    printf("%d", total);
}