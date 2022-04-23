#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, sum = 0;
    printf("Enter any number :- ");
    scanf("%d", &n);

    for (i = 1; i <= 3; i++)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("Sum of digit is :- %d", sum);
}
