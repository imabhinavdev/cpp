// Array using scanf function. Taking input from user.
#include <stdio.h>

void main()
{
    int ary[] = {};
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter the number:- ");
        scanf("%d", &ary[i]);
        printf("The value is %d\n", ary[i]);
    }
    printf("%d %d %d %d %d", ary[1], ary[2], ary[3], ary[4], ary[5]);
}