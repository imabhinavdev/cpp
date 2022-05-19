#include <stdio.h>

void main()
{
    int num;
    printf("Enter any number :- ");
    scanf("%d", &num);
    for (int a = 1; a <= 10; a++)
    {
        printf("%d \n", a * num);
    }
}
