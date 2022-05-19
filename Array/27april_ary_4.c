// Position of character in array
#include <stdio.h>

void main()
{
    char ch;
    int check = 0, n;
    char ary[] = {"Hello world"};
    int size = sizeof(ary);
    printf("Enter any character:- ");
    scanf("%c", &ch);
    for (int i = 0; i <= size - 1; i++)
    {
        if (ary[i] == ch)
        {
            check++;
            n = i;
            break;
        }
    }
    if (check == 1)
        printf("The value is %d and the position is :- %d", n, n + 1);
    else
        printf("invalid input");
}