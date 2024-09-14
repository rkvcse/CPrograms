#include <stdio.h>
int p1()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
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
    return 0;
}
int p2()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 8 - i)
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
    return 0;
}
int p3()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                if ((i % 2 && j % 2 == 0) || (i % 2 == 0 && j % 2))
                    printf("*");
                else
                    printf(" ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
int p4()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1, k = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                if (j < 4)
                    printf("%d", k++);
                else
                    printf("%d", k--);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
int p5()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1, k = 'A'; j <= 7; j++)
        {
            if (j >= i && j <= 8 - i)
            {
                printf("%c", k++);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
int p6()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1, k = 'A'; j <= 7; j++)
        {
            if (j >= i && j <= 8 - i)
            {
                if (j < 4)
                    printf("%c", k++);
                else
                    printf("%c", k--);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
//to do
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1,k = 1; j <= 9; j++)
        {
            
            if (j >= 6-i && j <= 4+i)
            {
                if ((i % 2 && j % 2) || (i % 2 == 0 && j % 2==0)){
                   printf("*");
                }else
                    printf(" ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
int p9()
{
    int i, j,k;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1,k=0; j <= 7; j++)
        {
            if(j<=4){
               k++;
            }else{
               k--;
            }
            if (j <= 5 - i || j >= 3 + i)
            {  
                if(j<=5-i)
                  printf("%d",k);
                else
                  printf("%d",k);  
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
int p10()
{
    int i, j,k;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1,k=64; j <= 7; j++)
        {
            if(j<=4){
               k++;
            }else{
               k--;
            }
            if (j <= 5 - i || j >= 3 + i)
            {  
                if(j<=5-i)
                  printf("%c",k);
                else
                  printf("%c",k);  
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}