#include <stdio.h>

void main()
{
    int ary[5], total = 0, change;
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter  marks :- ");
        scanf("%d", &ary[i]);
        total = total + ary[i];
    }
    for (int j = 0; j <= 4; j++)
    {
        for (int k = j + 1; k <= 4; k++)
        {
            if (ary[k] > ary[j])
            {
                change = ary[j];
                ary[j] = ary[k];
                ary[k] = change;
                break;
            }
        }
    }
    for (int m = 0; m <= 4; m++)
    {
        printf("%d\n", ary[m]);
    }
}