#include <stdio.h>
int p1()
{
   float cp, sp, p;
   printf("Enter Cost Price: ");
   scanf("%f", &cp);
   printf("Enter Selling Price: ");
   scanf("%f", &sp);
   if (cp > sp)
   {
      printf("loss percentage is : %f", (cp - sp) / cp * 100);
   }
   else
   {
      printf("profit percentage is : %f", (sp - cp) / cp * 100);
   }
   return 0;
}
int p2()
{
   int sub1, sub2, sub3, sub4, sub5;
   float avg;
   printf("Enter marks of five subjects(using space): ");
   scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
   avg = (sub1 + sub2 + sub3 + sub4 + sub5) / 5.0;
   if (sub1 >= 33 && sub2 >= 33 && sub3 >= 33 && sub4 >= 33 && sub5 >= 33)
   {
      printf("candidate is pass");
   }
   else
   {
      printf("candidate is fail");
   }
   return 0;
}
int p3()
{
   char ch;
   printf("Enter a alphabet : ");
   scanf("%c", &ch);
   if (ch > 'A' && ch < 'Z')
   {
      printf("given alphabet is uppercase");
   }
   else if (ch >= 'a' && ch <= 'z')
   {
      printf("given alphabet is Lowercase");
   }
   return 0;
}
int p4()
{
   int num;
   printf("Enter a number : ");
   scanf("%d", &num);
   if (num%6)
   {
      printf("not divisible by 2 and 3");
   }
   else 
   {
     printf("divisible by 2 and 3");
   }
   return 0;
}
int main()
{
   int num;
   printf("Enter a number : ");
   scanf("%d", &num);
   if (num%3 && num%7)
   {
      printf("not divisible by 7 or 3");
   }
   else 
   {
     printf("divisible by 7 or 3");
   }
   return 0;
}