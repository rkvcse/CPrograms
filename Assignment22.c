#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int getFactiorial(int);
int getCombinations(int, int);
int getPermutations(int, int);
void checkDigit(int, int);
void getPrimeFactors(int);
/// @brief
/// @return
int p1()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    printf("factorial of given number is : %d", getFactiorial(number));
    return 0;
}

int p2()
{
    int rs, ns;
    printf("Enter n and r : ");
    scanf("%d%d", &ns, &rs);
    printf("total no of ways is : %d", getCombinations(ns, rs));
    return 0;
}

int p3()
{
    int n, r;
    printf("Enter n and r : ");
    scanf("%d%d", &n, &r);
    printf(" no of ways for permutations is : %d", getPermutations(n, r));
    return 0;
}

int p4()
{
    int n, d;
    printf("Enter a number and a digit : ");
    scanf("%d%d", &n, &d);
    checkDigit(n, d);
    return 0;
}

int main()
{
    int nums;
    printf("Enter a number : ");
    scanf("%d", &nums);
    getPrimeFactors(nums);
    return 0;
}

/// @brief
/// @param num
/// @return
int getFactiorial(int num)
{
    int f;
    for (f = 1; num > 0; num--)
    {
        f = f * num;
    }
    return f;
}

int getCombinations(int n, int r)
{
    int c;
    c = getFactiorial(n) / (getFactiorial(r) * getFactiorial(n - r));
    return c;
}

int getPermutations(int n, int r)
{
    int c;
    c = getFactiorial(n) / getFactiorial(n - r);
    return c;
}

void checkDigit(int num, int digit)
{
    int r;
    while (num > 0)
    {
        r = num % 10;
        if (digit == r)
        {
            printf("present");
            break;
        }
        num /= 10;
    }
    if (!num)
        printf("not present");
}

void getPrimeFactors(int num)
{
    int i, k;
    for (i = 2; i <= num; )
    {
        if (num % i == 0)
        {
            for (k = 2; k < i; k++)
            {
                if (i % k == 0)
                    break;
            }
            if (k == i){
                printf(" %d ", i);
                num/=i;
            }
        }else{
            i++;
        }
    }
}