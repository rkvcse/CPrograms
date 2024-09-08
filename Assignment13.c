#include <stdio.h>
int p1()
{
   int i = 1,N,sum=0;
   printf("Enter the value of N : ");
   scanf("%d",&N);
   while (i <= N)
   {
      sum+=i;
      i++;
   }
   printf("Sum of %d natural numbers is : %d",N,sum);
   return 0;
}

int p2()
{
   int i = 1,N,sum=0;
   printf("Enter the value of N : ");
   scanf("%d",&N);
   while (i <= (2*N))
   {
      if (!(i % 2))
      {
         sum+=i;
      }
      i++;
   }
   printf("Sum of %d even natural numbers is : %d",N,sum);
   return 0;
}

int p3()
{
   int i = 1,N,sum=0;
   printf("Enter the value of N : ");
   scanf("%d",&N);
   while (i <= (2*N-1))
   {
      if (i % 2)
      { 
         sum+=i;
      }
    
      i++;
   }
   printf("Sum of %d odd natural numbers is : %d",N,sum);
   return 0;
}

int p4()
{
   int i = 1,N,sum=0;
   printf("Enter the value of N : ");
   scanf("%d",&N);
   while (i <= N)
   {   
      sum+=(i*i);   
      i++;
   }
   printf("Sum of cubes of first %d natural numbers is : %d",N,sum);
   return 0;
}
int p5()
{
   int i = 1,N,sum=0;
   printf("Enter the value of N : ");
   scanf("%d",&N);
   while (i <= N)
   {   
      sum+=(i*i*i);   
      i++;
   }
   printf("Sum of cubes of first %d natural numbers is : %d",N,sum);
   return 0;
}
//this is example question(not from assignment)
int main()
{
   int num,count = 1;
   while (count <= 3)
   {  
      printf("Enter an even number : ");
      scanf("%d",&num); 
      if(num%2==0)
         break;
      count++;
   }
   if(count==4){
      printf("game over");
   }else{
      printf("You won the game");
   }
   
   return 0;
}