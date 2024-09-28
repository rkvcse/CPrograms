#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int getFactorial(int, int);
int getHCF(int, int, int, int);
int getNTermOfFabinacciSeries(int, int, int, int, int);
int countDigit(int, int);
int calculatePower(int, int, int, int);
int p1p2p3p4p5()
{
    int n, i = 1,p,d,hc;
    printf("Enter no. of terms : ");
    scanf("%d", &n);
    printf("Enter power : ");
    scanf("%d", &p);
    if(n>p){
        d = n-p;
        hc = p;
    }else{
        d = p-n;
        hc = n;
    }
    printf("value is : %d", calculatePower(n, p, 1, 1));       // p1
    printf("digit count is : %d", countDigit(n, i));    // p2
    printf("sseries is : ", getNTermOfFabinacciSeries(0, 1, 0, p, i));   // p3
    printf("hcf is : %d", getHCF(n, p, d, hc)); // p4
    printf("factorial is : %d", getFactorial(n, i)); // p5
    return 0;
}
int getFactorial(int num, int fact)
{
    if (num < 1)
    {
        return fact;
    }
    else
    {
        fact *= num;
        num--;
        getFactorial(num, fact);
    }
}
int getHCF(int a, int b, int d, int hcf)
{
    if (a % hcf == 0 && b % hcf == 0)
    {
        return hcf;
    }
    else
    {  
        if (d > hcf)
        {
            getHCF(a, b, d - hcf, hcf);
        }
        else
        {
            getHCF(a, b, d, hcf - d);
        }
    }
}
int getNTermOfFabinacciSeries(int a, int b, int c, int n, int i)
{
    if (n < i)
    {
        return 0;
    }
    else
    {
        printf(" %d ", c);
        a = b;
        b = c;
        c = a + b;
        i++;
        getNTermOfFabinacciSeries(a, b, c, n, i);
    }
}
int countDigit(int num, int count)
{
    if (num > 0)
    {
        num /= 10;
        count++;
        countDigit(num, count);
    }
    else if (count == 0)
    {
        return 1;
    }
    else
    {
        return count;
    }
}
int calculatePower(int num, int p, int i, int val)
{
    if (i > p)
    {
        return val;
    }
    else
    {
        val *= num;
        i++;
        calculatePower(num, p, i, val);
    }
}
