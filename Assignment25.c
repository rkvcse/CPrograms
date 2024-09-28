#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int printNaturalNumber(int, int);
int printOddNaturalNumber(int, int);
int printNaturalNumberInReverse(int);
int printOddNaturalNumberInReverse(int);
int printEvenNaturalNumber(int, int);
int p1p2p3p4p5(){
  int n,i=1;
  printf("Enter no. of terms : ");
  scanf("%d",&n);
  printNaturalNumber(n,i); //p1
  printNaturalNumberInReverse(n);//p2
  printOddNaturalNumber(n,i);//p3
  printOddNaturalNumberInReverse(n); //p4
  printEvenNaturalNumber(n,i);//p5
}
int printNaturalNumber(int num, int i)
{
    if (num < i)
    {
        return 0;
    }
    else
    {
        printf(" %d ", i);
        i++;
        printNaturalNumber(num, i);
    }
}
int printOddNaturalNumber(int num, int i)
{
    if (num < i)
    {
        return 0;
    }
    else
    {
        printf(" %d ", 2*i-1);
        i++;
        printOddNaturalNumber(num, i);
    }
}
int printEvenNaturalNumber(int num, int i)
{
    if (num < i)
    {
        return 0;
    }
    else
    {
        printf(" %d ", 2*i);
        i++;
        printEvenNaturalNumber(num, i);
    }
}
int printNaturalNumberInReverse(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        printf(" %d ", num);
        num--;
        printNaturalNumberInReverse(num);
    }
}
int printOddNaturalNumberInReverse(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        printf(" %d ", 2*num-1);
        num--;
        printOddNaturalNumberInReverse(num);
    }
}