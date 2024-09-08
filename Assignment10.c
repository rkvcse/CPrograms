#include <stdio.h>
int p1()
{
   int num;
   printf("Enter a number : ");
   scanf("%d", &num);
   if (num > 0)
   {
      printf("positive");
   }
   else if (num < 0)
   {
      printf("negative");
   }
   else
   {
      printf("zero");
   }
   return 0;
}

int p2()
{
   char ch;
   printf("Enter a character : ");
   scanf("%c", &ch);
   if (ch > 64 && ch < 91)
   {
      printf("alphabet uppercase");
   }
   else if (ch > 96 && ch < 123)
   {
      printf("alphabet Lowercase");
   }
   else if (ch > 47 && ch < 58)
   {
      printf("digit");
   }
   else
   {
      printf("special character");
   }
   return 0;
}
int p3()
{
   int a, b, c;
   printf("Enter three sides of triangle(using space): ");
   scanf("%d %d %d", &a, &b, &c);
   if (a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && c + a > b)
   {
      printf("sides of a triangle");
   }
   else
   {
      printf("not the sides of a triangle");
   }
   return 0;
}
int main()
{
   int m;
   printf("Enter month no : ");
   scanf("%d", &m);
   if (m==2)
   {
      printf("28 or 29 days");
   }
   else if(m==4||m==6||m==9||m==11)
   {
      printf("30 days");
   }else if(m>12){
      printf("Invalid month no");   
   }else{
      printf("31 days");
   }

   return 0;
}