#include <stdio.h>
int p1()
{
    int num, i, factorial = 1;
    printf("enter a number : ");
    scanf("%d",&num);
    for (i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    printf("factorial of %d is %d",num,factorial);
    return 0;
}
int p2()
{
    int num, noOfDigit=0;
    printf("enter a number : ");
    scanf("%d",&num);
    do
    {
        noOfDigit++;
        num/=10;
    } while (num%10>0);
    printf("no of digit in given number is %d",noOfDigit);
    return 0;
}
int p3()
{
    int num,i;
    printf("enter a number : ");
    scanf("%d",&num);
    for(i=2;i<=num;i++){
        if(num%i==0)
            break;
    }
    if(i==num)
       printf("prime number");
    else
       printf("not a prime number");     
    return 0;
}
int p4()
{
    int num1,num2,x,y;
    printf("enter first and second number : ");
    scanf("%d%d",&num1,&num2);
    x=num1,y=num2;
    
    while(x!=y){
        if(x>y)
            y+=num2;
        else
            x+=num1;      
    } 
    printf("LCM of %d and %d is : %d",num1,num2,x);
    return 0;
}
int main()
{
    int num,rem,revnum=0;
    printf("enter number : ");
    scanf("%d",&num);
    
    while(num>0){
       rem = num%10;
       revnum = (revnum*10)+rem ;
       num/=10;  
    } 
    printf("Reverse of given number is : %d",revnum);
    return 0;
}