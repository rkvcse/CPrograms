#include <stdio.h>
int p1()
{
   int i = 0;
   while (i <= 4)
   {
      printf("MySirG \n");
      i++;
   }
   return 0;
}
int p2()
{
   int i = 1;
   while (i <= 10)
   {
      printf("%d ", i);
      i++;
   }
   return 0;
}
int p3()
{
   int i = 10;
   while (i != 0)
   {
      printf("%d ", i);
      i--;
   }
   return 0;
}
int p4()
{
   int i = 1;
   while (i <= 19)
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
   int i = 19;
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
   int i = 1;
   while (i <= 20)
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
   int i = 20;
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
   int i = 1;
   while (i <= 10)
   {      
      printf("%d ", i*i);
      i++;
   }
   return 0;
}
int p9()
{
   int i = 1;
   while (i <= 10)
   {      
      printf("%d ", i*i*i);
      i++;
   }
   return 0;
}
int main()
{
   int i = 1;
   while (i <= 10)
   {      
      printf("%d ", 5*i);
      i++;
   }
   return 0;
}