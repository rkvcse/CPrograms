#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
float getAreaOfCircle(float);
float getSimpleIntrest(int, int, int);
int chekOddEven(int);
void printNaturalNumber(int);
void printOddNaturalNumber(int);
int p1()
{
    float r, area;
    printf("Enter radius of circle : ");
    scanf("%f", &r);
    area = getAreaOfCircle(r);
    printf("area of circle is : %f", area);
    return 0;
}

int p2()
{
    int r, p, t;
    float i;
    printf("Enter principle, time  and rate : ");
    scanf("%d%d%d", &p, &t, &r);
    i = getSimpleIntrest(p,r,t);
    printf("simple intrest is : %f", i);
    return 0;
}

int p3()
{
    int r;
    printf("Enter a number : ");
    scanf("%d", &r);
    printf(" return value is : %d", chekOddEven(r));
    return 0;
}

int p4()
{
    int r;
    printf("Enter number of terms : ");
    scanf("%d", &r);
    printNaturalNumber(r);
    return 0;
}

int main()
{
    int r;
    printf("Enter number of terms : ");
    scanf("%d", &r);
    printOddNaturalNumber(r);
    return 0;
}

float getAreaOfCircle(float r)
{
    float area;
    area = (22 / 7.0) * r * r;
    return area;
}

float getSimpleIntrest(int p, int r, int t)
{
    int si;
    si = (p * t * r) / 100;
    return si;
}

int chekOddEven(int num)
{
    if (num % 2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void printNaturalNumber(int term)
{
    int i;
    for (i = 1; i <= term; i++)
    {
        printf(" %d ", i);
    }
}

void printOddNaturalNumber(int term)
{
    int i;
    for (i = 1; i <= term; i++)
    {
        printf(" %d ", 2 * i - 1);
    }
}