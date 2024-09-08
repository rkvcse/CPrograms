#include <stdio.h>
int p1()
{
    int num;
    printf("Enter a number ");
    scanf("%d", &num);

    if (num > 99 && num < 1000)
    {
        printf("three digit number");
    }
    else
    {
        printf("not a three digit number");
    }
    return 0;
}
int p2()
{
    int num1, num2;
    printf("Enter two numbers(using space) ");
    scanf("%d %d", &num1, &num1);

    if (num1 >= num2)
    {
        printf("greater number is : %d", num1);
    }
    else
    {
        printf("greater number is : %d", num2);
    }
    return 0;
}
int p3()
{
    int a, b, c, D;
    printf("Enter value of a , b, c of given quadratic equation(using space) ");
    scanf("%d %d %d", &a, &b, &c);
    D = (b * b) - (4 * a * c);
    if (D > 0)
    {
        printf("roots of give quadratic equation are real and distinct");
    }
    else if (D == 0)
    {
        printf("roots of give quadratic equation are equal");
    }
    else
    {
        printf("roots of give quadratic equation are imaginary");
    }
    return 0;
}
int p4()
{
    int y, rem;
    printf("Enter year ");
    scanf("%d", &y);

    if (y % 100)
    {
        rem = 4;
    }
    else
    {
        rem = 400;
    }
    if (y % rem)
    {
        printf("Not leap year");
    }
    else
    {
        printf("Leap year");
    }
    return 0;
}
int main()
{
    int num1, num2, num3;
    printf("Enter three number(using space) ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
    {
        printf("greatest number is : %d", num1);
    }
    else if (num2 > num3)
    {
        printf("greatest number is : %d", num2);
    }
    else
    {
        printf("greatest number is : %d", num3);
    }
    return 0;
}