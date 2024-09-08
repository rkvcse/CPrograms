#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two number : ");
    scanf("%d%d",&num1,&num2);
    printf("First number is : %d\nSecond number is : %d",num1,num2);
    // num1 = num1*num2,num2 = num1/num2,num1 = num1/num2;
    num2 = (num1+num2)-(num1=num2);
    printf("\nAfter swapping First number is : %d\nSecond number is : %d",num1,num2);
    return 0;
}
int p7(){
    int num1,num2;
    printf("Enter two number : ");
    scanf("%d%d",&num1,&num2);
    printf("First number is : %d\nSecond number is : %d",num1,num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("\nAfter swapping First number is : %d\nSecond number is : %d",num1,num2);
    return 0;
}
int p6(){
    int num1,num2;
    printf("Enter two number : ");
    scanf("%d%d",&num1,&num2);
    printf("First number is : %d\nSecond number is : %d",num1,num2);
    num1 = num1*num2;
    num2 = num1/num2;
    num1 = num1/num2;
    printf("\nAfter swapping First number is : %d\nSecond number is : %d",num1,num2);
    return 0;
}
int p5(){
    int num1,num2;
    printf("Enter two number : ");
    scanf("%d%d",&num1,&num2);
    printf("First number is : %d\nSecond number is : %d",num1,num2);
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    printf("\nAfter swapping First number is : %d\nSecond number is : %d",num1,num2);
    return 0;
}
int p4(){
    int num1,num2,num3;
    printf("Enter two number : ");
    scanf("%d%d",&num1,&num2);
    printf("First number is : %d\nSecond number is : %d",num1,num2);
    num3 = num1;
    num1 = num2;
    num2 = num3;  
    printf("\nAfter swapping First number is : %d\nSecond number is : %d",num1,num2);
    return 0;
}
int p3(){
    char ch = 'A';
    printf("initially the value of character variable is : %c\n",ch);
    ch++;
    printf("Now the value of character variable is: %c",ch);
    return 0;
}
int p2(){
    printf("size of a real constant is: %d byte",sizeof(4.5));
    return 0;
}
int p1(){
    printf("size of a characater constant is: %d byte",sizeof('A'));
    return 0;
}