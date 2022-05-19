//
#include <stdio.h>
float avg(int array[], int size);
void main()
{

    int ary[] = {}, total_num;
    printf("Enter total number :- ");
    scanf("%d", &total_num);
    printf("%d\n", total_num);
    for (int i = 0; i < total_num; i++)
    {
        printf("Enter %d :- ", i + 1);
        scanf("%d", &ary[i]);
    }
    printf("The average number is:- %.2f", avg(ary, total_num));
}

float avg(int array[], int size)
{
    int *p, sum;
    p = array;
    for (int k = 0; k < size; k++)
    {
        sum = sum + *(p + k);
    }
    return ((float)sum / size);
}