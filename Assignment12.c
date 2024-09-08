#include <stdio.h>
int p1()
{
   int i = 1,N;
   printf("Enter the value of N : ");
   scanf("%d",&N);
   while (i <= N)
   {
      printf("MySirG \n");
      i++;
   }
   return 0;
}
int p2()
{
   int i = 1,N;
   printf("Enter the value of N : ");
   scanf("%d",&N);
   while (i <= N)
   {
      printf("%d ", i);
      i++;
   }
   return 0;
}
int p3()
{
   int N;
   printf("Enter the value of N : ");
   scanf("%d",&N);
   while (N != 0)
   {
      printf("%d ", N);
      N--;
   }
   return 0;
}
int p4()
{
   int i = 1,N;
   printf("Enter the value of N : ");
   scanf("%d",&N);
   while (i <= (2*N-1))
   {
      if (i % 2)
      {
         printf("%d ", i);
      }
      i++;
   }
   return 0;
}
int p5()
{
   int i , N;
   printf("Enter the value of N : ");
   scanf("%d",&N);
   i = (2*N-1);
   while (i != 0)
   {
      if (i % 2)
      {
         printf("%d ", i);
      }
      i--;
   }
   return 0;
}
int p6()
{
   int i = 1,N;
   printf("Enter the value of N : ");
   scanf("%d",&N);
   while (i <= (2*N))
   {
      if (!(i % 2))
      {
         printf("%d ", i);
      }
      i++;
   }
   return 0;
}
int p7()
{
   int i,N;
   printf("Enter the value of N : ");
   scanf("%d",&N);
   i = (2*N);
   while (i != 0)
   {
      if (!(i % 2))
      {
         printf("%d ", i);
      }
      i--;
   }
   return 0;
}
int p8()
{
   int i = 1,N;
   printf("Enter the value of N : ");
   scanf("%d",&N);;
   while (i <= N)
   {      
      printf("%d ", i*i);
      i++;
   }
   return 0;
}
int p9()
{
   int i = 1,N;
   printf("Enter the value of N : ");
   scanf("%d",&N);
   while (i <= N)
   {      
      printf("%d ", i*i*i);
      i++;
   }
   return 0;
}
int main()
{
   int i = 1,N;
   printf("Enter the value of N : ");
   scanf("%d",&N);
   while (i <= 10)
   {      
      printf("%d ", N*i);
      i++;
   }
   return 0;
}