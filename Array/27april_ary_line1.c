// Take the input of a line.
#include <stdio.h>

void main()
{

    char name[] = {};
    printf("Enter your name:- ");
    scanf("%[^\n]%*c", &name);
    printf("%s", name);
}