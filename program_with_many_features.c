#include <stdio.h>

#include <conio.h>

void main()
{
    int n1, n2, choice, i, n_sum = 0;
    float n11, n12, n13, n14, n15, per, factorial = 1;
    char c1, c2, c3, c4;

    printf("Press\n1.Addition\t2.Subtraction\t3.Division\t4.Multiplication\n");
    printf("5.Percentage \t6.Simple Interest\t7.Divisibilty\t8.Find ASCII Code\n");
    printf("9.Find ASCII Character\t10.Factorial\t11.Sum of n no.\t12.Show table\n");
    printf("13.Odd Even\t14.Lower/Upper case or digit\t15.Vowel or consonant");

    printf("\n\nEnter your choice:- ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter two number for addition:- \t");
        scanf("%d%d", &n1, &n2);
        printf("The sum of %d & %d is %d", n1, n2, n1 + n2);
    }
    else if (choice == 2)
    {
        printf("Enter two number for subtraction:- \t");
        scanf("%d%d", &n1, &n2);
        printf("The difference of %d & %d is %d", n1, n2, n1 - n2);
    }
    else if (choice == 3)
    {
        printf("Enter two number for division:- \t");
        scanf("%f%f", &n11, &n12);
        printf("The division of %.2f & %.2f is %.2f", n11, n12, n11 / n12);
    }
    else if (choice == 4)
    {
        printf("Enter two number for multiplication:- \t");
        scanf("%f%f", &n11, &n12);
        printf("The multiplication of %.2f & %.2f is %.2f", n11, n12, n11 * n12);
    }
    else if (choice == 5)
    {
        printf("Enter total no :-\t ");
        scanf("%d", &n11);
        printf("Enter obtained no.:-\t");
        scanf("%d", &n12);
        printf("The percentage is %.2f", (n12 / n11) * 100);
    }
    else if (choice == 6)
    {
        printf("Enter principle value to find Simple Interest:-\t");
        scanf("%f", &n11);
        printf("Enter rate of interest:-\t");
        scanf("%f", &n12);
        printf("Enter time duration in years:-\t");
        scanf("%f", &n13);
        printf("Simple interest of principle amount %.2f for rate of interest of %.2f and for %.2f yrs is %.2f", n11, n12, n13, (n11 * n12 * n13) / 100);
    }
    else if (choice == 7)
    {
        printf("Enter the first number for divisiblity test:-\t");
        scanf("%d", &n1);
        printf("Enter the second number:-\t");
        scanf("%d", &n2);
        if (n1 % n2 == 0)
            printf("%d is completely divisble by %d", n1, n2);
        else
            printf("%d is not completely divisible by %d and leaves remainder %d", n1, n2, n1 % n2);
    }
    else if (choice == 9)
    {
        printf("Enter ASCII character:-\n");
        scanf("%d", &n1);
        printf("ASCII code is %c ", n1);
    }
    else if (choice == 10)
    {
        printf("Enter any number to find factorial of a number :-\t");
        scanf("%f", &n11);
        for (i = n11; i >= 1; i--)
            factorial = factorial * i;
        printf("Factorial of %.1f is %.1f ", n11, factorial);
    }
    else if (choice == 11)
    {
        printf("Enter any number to show sum upto that number:-\t");
        scanf("%d", &n1);
        for (i = 1; i <= n1; i++)
            n_sum = n_sum + i;
        printf("The sum upto %d is %d", n1, n_sum);
    }
    else if (choice == 12)
    {
        printf("Enter a number to print it's table:-\t");
        scanf("%d", &n1);
        for (i = 1; i <= 10; i++)
            printf("%d * %d = %d\n", n1, i, n1 * i);
    }
    else if (choice == 13)
    {
        printf("Enter any number to find even and odd:-\t");
        scanf("%d", &n1);
        if (n1 % 2 == 0)
            printf("%d is even no.", n1);
        else
            printf("%d is odd no.", n1);
    }
    else if (choice == 14)
    {
        printf("Enter any character:- \t");
        scanf("%c", &c3);

        if (c3 >= 'A' && c3 <= 'Z')
            printf("Character is uppercase\n");
        else if (c3 >= 'a' && c3 <= 'z')
            printf("Character is lowercase\n");
        else if (c3 >= '0' && c3 <= '9')
            printf("Character is digit\n");
        else
            printf("It is a special character");
    }

    else if (choice == 15)
    {
        printf("Enter any character:- \t");
        scanf("%c", &c1);
        if (c4 == 'A' || c4 == 'E' || c4 == 'I' || c4 == 'O' || c4 == 'U' || c4 == 'a' || c4 == 'e' || c4 == 'i' || c4 == 'o' || c4 == 'u')
            printf("Character is Vowel\n");

        else
            printf("Character is consonant");
    }
}
