#include <stdio.h>
int p1()
{
    int num = 2, i;
    printf("all prime numbers under 100 is : ");
    while (num <= 100)
    {
        for (i = 2; i <= num; i++)
        {
            if (num % i == 0)
                break;
        }
        if (i == num)
            printf("%d ", num);
        num++;
    }

    return 0;
}
int p2()
{
    int num1, num2, i;
    printf("Enter two numbers between which you get prime numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("all prime numbers between %d and %d is : ", num1, num2);
    while (num1 < num2)
    {
        for (i = 2; i <= num1; i++)
        {
            if (num1 % i == 0)
                break;
        }
        if (i == num1)
            printf("%d ", num1);
        num1++;
    }

    return 0;
}

int p3()
{
    int num, i;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("next prime number after %d is : ", num);
    num++;
    while (num)
    {
        for (i = 2; i <= num; i++)
        {
            if (num % i == 0)
                break;
        }
        if (i == num)
        {
            printf("%d ", num);
            break;
        }
        num++;
    }

    return 0;
}

int p4()
{
    int num1, num2, x, y;
    printf("enter first and second number : ");
    scanf("%d%d", &num1, &num2);
    x = num1, y = num2;

    while (num1 != num2)
    {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    printf("HCF of %d and %d is : %d", x, y, num1);
    return 0;
}
int main()
{
    int num1, num2, x, y;
    printf("enter first and second number : ");
    scanf("%d%d", &num1, &num2);
    x = num1, y = num2;

    while (num1 != num2)
    {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    if (num1 == 1 && num2 == 1)
        printf("%d and %d are co-prime number", x, y);
    else
        printf("%d and %d are not co-prime number", x, y);
    return 0;
}