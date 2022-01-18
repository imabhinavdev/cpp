#include <stdio.h>
#include <conio.h>
void main()
{
    int i, limit;
    printf("Enter any limit :- ");
    scanf("%d", &limit);
    for (i = 2; i <= limit; i += 2)
        printf("%d \t", i);
}
