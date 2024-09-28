#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int getLCM(int, int);
int getHCF(int, int);
int checkPrime(int);
int getNextPrime(int);
void getFirstNPrime(int);
/// @brief
/// @return
int p1()
{
    int as,bs;
    printf("Enter two number : ");
    scanf("%d%d", &as,&bs);
    printf("lcm of given number is : %d", getLCM(as,bs));
    return 0;
}

int p2()
{
    int rs, ns;
    printf("Enter two number : ");
    scanf("%d%d", &ns, &rs);
    printf("HCF is : %d", getHCF(ns, rs));
    return 0;
}

int p3()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    if(checkPrime(n))
        printf("prime no");
    else 
        printf("Not prime no");    
    return 0;
}

int p4()
{
    int n;
    printf("Enter a number  : ");
    scanf("%d", &n);
    printf("Next prime no is : %d",getNextPrime(n));
    return 0;
}

int main()
{
    int nums;
    printf("Enter no of term : ");
    scanf("%d", &nums);
    getFirstNPrime(nums);
    return 0;
}

/// @brief
/// @param num
/// @return
int getLCM(int a, int b)
{
    int lcm, g;
    g = lcm = a > b ? a : b;
    while (lcm)
    {
        if (lcm % a == 0 && lcm % b == 0)
            break;
        else
            lcm += g;
    }
    return lcm;
}

int getHCF(int a, int b)
{
    int hcf, s;
    a > b ? (hcf = b, s = a - b) : (hcf = a, s = b - a);
    while (hcf)
    {
        if (a % hcf == 0 && b % hcf == 0)
            break;
        else if (hcf > s)
        {
            hcf -= s;
        }
        else
        {
            s = s - hcf;
        }
    }
    return hcf;
}

int checkPrime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            break;
    }
    if (n == i)
        return 1;
    else
        return 0;
}

int getNextPrime(int num)
{
    num++;
    while (num)
    {
        if(checkPrime(num))
            break;
        num++;
    }
    return num;
}

void getFirstNPrime(int num)
{
    int i, k;
    for (i = 1, k = 2; i <= num; k++)
    {
        if (checkPrime(k))
        {
            printf(" %d ", k);
            i++;
        }
    }
}