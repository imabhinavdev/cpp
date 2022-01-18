#include <stdio.h>

#include <conio.h>

void main() 
{ char c1;
    printf("Enter any character:- \t");
    scanf("%c",&c1);
    if(c1>='A' && c1<='Z')
        printf("Character is uppercase\n");
    else if(c1>='a' && c1<='z')
        printf("Character is lowercase\n");
    else if(c1>='0' && c1<='9')
        printf("Character is digit\n");
    else
        printf("It is a special character");
    
} 
