#include <stdio.h>
#include <conio.h>
void main()
{
    int s = 0, i,n;

    printf("Enter any number:-  ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        s = s + i;

    printf("The sum is %d", s);
}
