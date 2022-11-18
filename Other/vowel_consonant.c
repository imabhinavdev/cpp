#include <stdio.h>

#include <conio.h>

void main() 
{ char c1;
    printf("Enter any character:- \t");
    scanf("%c",&c1);
    if(c1=='A' || c1=='E' || c1=='I' || c1=='O' || c1=='U' || c1=='a' || c1=='e' || c1=='i' || c1=='o' || c1=='u')
        printf("Character is Vowel\n");
    
    else
        printf("Character is consonant");
    
} 
