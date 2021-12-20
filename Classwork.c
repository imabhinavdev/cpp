#include <stdio.h>

#include <conio.h>

void main()
{
    int m1, m2, m3, m4, m5, sup, total, per;
    sup = 0;

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

    printf("Dear user your total marks are %d and percentage is %d %", total, per);


    if (per>69.9 && sup<3)
        printf("\n Congrats you are in first division");

    else if(per >=45 && per <=69.9 && sup<3)
        printf("\n You are in second division");

    else if (per>=33 && sup<3)
        printf("\nYou are in third division");

    
    else
        printf("\nYou are fail"); 

}
