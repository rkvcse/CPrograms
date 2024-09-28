#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int printEvenNaturalNumberInReverse(int);
int printSquareNaturalNumber(int, int);
int getBinary(int, int);
int getOctal(int, int);
int getReverse(int, int);
int p1p2p3p4p5()
{
    int n, i = 1;
    printf("Enter no. of terms : ");
    scanf("%d", &n);
    printEvenNaturalNumberInReverse(n); // p1
    printSquareNaturalNumber(n,i);      // p2
    printf("binary is : %d",getBinary(n, i));//p3
    printf("octal is : %d",getOctal(n, i));//p4
    printf(" rverse is : %d",getReverse(n, 0)); // p5
    return 0;
}
int printSquareNaturalNumber(int num, int i)
{
    if (num < i)
    {
        return 0;
    }
    else
    {
        printf(" %d ", i * i);
        i++;
        printSquareNaturalNumber(num, i);
    }
}
int getBinary(int num, int b)
{
    if (num == 0)
    {
        int n = 0;
        while (b > 0)
        {
            n = n * 10 + b % 10;
            b /= 10;
        }
        return n / 10;
    }
    else
    {
        b = b * 10 + (num % 2);
        num /= 2;
        getBinary(num, b);
    }
}
int getOctal(int num, int b)
{
    if (num == 0)
    {
        int n = 0;
        while (b > 0)
        {
            n = n * 10 + b % 10;
            b /= 10;
        }
        return n / 10;
    }
    else
    {
        b = b * 10 + (num % 8);
        num /= 8;
        getOctal(num, b);
    }
}
int getReverse(int num, int rnum)
{
    if (num > 0)
    {
        rnum = (rnum * 10) + (num % 10);
        num /= 10;
        getReverse(num, rnum);
    }
    else
    {
        return rnum;
    }
}
int printEvenNaturalNumberInReverse(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        printf(" %d ", 2 * num);
        num--;
        printEvenNaturalNumberInReverse(num);
    }
}