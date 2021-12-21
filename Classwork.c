#include <stdio.h>

#include <conio.h>
// \\Made by Abhinav Singh

void main()
{
    int m1, m2, m3, m4, m5, sup, total, per;
    char name[200];
    sup = 0;
    printf("Enter your name\t");
    scanf("%s", &name);


    printf("Enter marks of sub 1\t");
    scanf("%d", &m1);
    if(m1<33)
        sup++;
    printf("Enter marks of sub 2\t");
    scanf("%d", &m2);
    if(m2<33)
        sup++;

    printf("Enter marks of sub 3\t");
    scanf("%d", &m3);
    if(m3<33)
        sup++;

    printf("Enter marks of sub 4\t");
    scanf("%d", &m4);
    if(m4<33)
        sup++;

    printf("Enter marks of sub 5\t");
    scanf("%d", &m5);
    if(m5<33)
        sup++;

    total = m1 + m2 + m3 + m4 + m5;
    per = total / 5;

    printf("Dear %s your total marks are %d and percentage is %d \n",name,total, per);


    if (per>69.9 && sup<3)
        printf("\n Congrats you are in first division");

    else if(per >=45 && per <=69.9 && sup<3)
        printf("\n You are in second division");

    else if (per>=33 && sup<3)
        printf("\nYou are in third division\n\n");

    
    else
        printf("\nYou are fail\n");


    if (m1<33)
    {
        printf(" You failed in 1 sub\n");
    }
    if (m2<33)
    {
        printf(" You failed in 2 sub\n");
    }

    if (m3<33)
    {
        printf(" You failed in 3 sub\n");
    }

    if (m4<33)
    {
        printf(" You failed in 4 sub\n");
    }

    if (m5<33)
    {
        printf(" Back in 5 sub\n"); 
    }
}
