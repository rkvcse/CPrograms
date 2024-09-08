#include <stdio.h>
int p1()
{
    int a = 0, b = 1, c = 0, n, nthterm, i;
    printf("enter value of n : ");
    scanf("%d", &n);
    if (n == 1)
    {
        nthterm = 0;
    }
    else if (n == 2)
    {
        nthterm = 1;
    }
    else
    {
        for (nthterm = 0, i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;

            if (i == n)
            {
                nthterm = c;
                break;
            }
        }
    }
    printf("%dth term of fibonacci series is: %d", n, nthterm);
    return 0;
}
int p2()
{
    int a = 0, b = 1, c = 0, n, nthterm, i;
    printf("enter value of n : ");
    scanf("%d", &n);
    printf("fibonacci series of first %d term : %d %d", n, a, b);
    if (n > 2)
    {
        for (nthterm = 0, i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;

            printf(" %d ", c);
        }
    }

    return 0;
}
int p3()
{
    int a = 0, b = 1, c, n;
    printf("enter a number : ");
    scanf("%d", &n);
    if (n >= 3)
    {
        for (c = a + b; c < n;)
        {
            c = a + b;
            a = b;
            b = c;
        }
        if (c == n)
        {
            printf("present in fibonacci series");
        }
        else
        {
            printf("not present in fibonacci series");
        }
    }
    else
    {
        if (n == 0 || n == 1 || n == 2)
        {
            printf("present in fibonacci series");
        }
        else
        {
            printf("not present in fibonacci series");
        }
    }

    return 0;
}
int p4()
{
    int rem, num, sum = 0, temp;
    printf("enter a number : ");
    scanf("%d", &num);
    temp = num;
    while (num)
    {
        rem = num % 10;
        num /= 10;
        sum += (rem * rem * rem);
    }
    if (temp == sum)
        printf("armstrong number");
    else
        printf("not armstrong number");

    return 0;
}
int main()
{
    int rem, num, sum = 0, temp;
    for (num = 1; num < 1000; num++)
    {
        temp = num;
        while (num)
        {
            rem = num % 10;
            num /= 10;
            sum += (rem * rem * rem);
        }

        if (temp == sum)
            printf(" %d ", num);
    }
    return 0;
}