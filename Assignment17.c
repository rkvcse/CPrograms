//this is the assignment to do yourself
#include <stdio.h>
int p1()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int p2()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j >= (6 - i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int p3()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int p4()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if(j>=i){
               printf("*");
            }else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
}
int p5()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if(j<=i){
               printf("%d",j);
            }
            
        }
        printf("\n");
    }
}
int p6()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = i; j >= 1; j--)
        {
            
               printf("%d",j);
            
            
        }
        printf("\n");
    }
}
int p7()
{
    int i, j,k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1,k='A'; j <= 5; j++)
        {
           if(j>=i){
              printf("%c",k);
              k++;
           }else{
              printf(" ");
           } 

        }
        printf("\n");
    }
}
int p8()
{
    int i, j,k=1;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
              printf("%d ",k);
              k++;
        }
        printf("\n");
    }
}
int p9()
{
    int i, j,k,m;
    for (i = 1,m='A'; i <= 5; i++)
    {
        for (j = 1,k=m; j <= 5; j++)
        {
            if(j>=i){
               printf("%c",k);
               k++;
            }else{
                printf(" ");
            }
        }
        printf("\n");
        m++;
    }
}
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if((i==1||i==5)){
               printf("*");
            }else if(j==1||j==5){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}