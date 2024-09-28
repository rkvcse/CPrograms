#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int printNaturalNumberSum(int, int, int);
int printOddNaturalNumberSum(int, int, int);
int printEvenNaturalNumberSum(int, int, int);
int printNaturalNumberSquareSum(int, int, int);
int printNumberDigitSum(int, int);
int p1p2p3p45(){
    int n, i = 1;
    printf("Enter no. of terms : ");
    scanf("%d", &n);
    printf("sum is : %d",printNaturalNumberSum(n, i, 0));//p1
    printf("sum is : %d",printOddNaturalNumberSum(n, i, 0));//p2
    printf("sum is : %d",printEvenNaturalNumberSum(n, i, 0));//p3
    printf("sum is : %d",printNaturalNumberSquareSum(n, i, 0));//p4
    printf("sum is : %d",printNumberDigitSum(n, 0));//p5
    return 0;
}
int printNaturalNumberSum(int num, int i, int sum)
{
    if (num < i)
    {
        return sum;
    }
    else
    {
        sum+=i;
        i++;
        printNaturalNumberSum(num, i, sum);
    }
}
int printOddNaturalNumberSum(int num, int i, int sum)
{
    if (num < i)
    {
        return sum;
    }
    else
    {
        sum+=(2*i-1);
        i++;
        printOddNaturalNumberSum(num, i, sum);
    }
}
int printEvenNaturalNumberSum(int num, int i, int sum)
{
    if (num < i)
    {
        return sum;
    }
    else
    {
        sum+=(2*i);
        i++;
        printEvenNaturalNumberSum(num, i, sum);
    }
}
int printNaturalNumberSquareSum(int num, int i, int sum)
{
    if (num < i)
    {
        return sum;
    }
    else
    {
        sum+=(i*i);
        i++;
        printNaturalNumberSquareSum(num, i, sum);
    }
}
int printNumberDigitSum(int num, int sum)
{
    if (num == 0)
    {
        return sum;
    }
    else
    {
        sum+=(num%10);
        num/=10;;
        printNumberDigitSum(num, sum);
    }
}
