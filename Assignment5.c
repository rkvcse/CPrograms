#include<stdio.h>
int p1(){
    int num,sum,d1,d2,d3;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    d1=num%10;
    num/=10;
    d2=num%10;
    num/=10;
    d3=num%10;
    sum = d1+d2+d3;
    printf("sum of digit of given number is : %d",sum);
    return 0;
}
int p2(){
    char ch='+';
    printf("ASCII code of %c is %d : ",ch,ch);
    return 0;
}
int p3(){
    int a=5;
    char b='r';
    float c=4.5;
    double d=5.9989675432;
    printf("size of int varible is : %d byte\n",sizeof(a));
    printf("size of char varible is : %d byte\n",sizeof(b));
    printf("size of float varible is : %d byte\n",sizeof(c));
    printf("size of doble varible is : %d byte\n",sizeof(d));
    return 0;
}
int p4(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    num/=10;
    num*=10;
    printf("The new a number is : %d",num);
    return 0;
}
int main(){
    int num,d;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Enter a digit : ");
    scanf("%d",&d);
    num*=10;
    num+=d;
    printf("The new a number is : %d",num);
    return 0;
}