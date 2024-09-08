#include<stdio.h>
int p1(){
    float INR,USD;
    printf("Enter price in INR ");
    scanf("%f",&INR);
    USD = INR/84.23;
    printf("value is %.2f USD",USD);
    return 0;
}
int p2(){
    int num;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    num = (num%10)*100+(num/10);
    printf("new number is %d",num);
    return 0;
}
int main(){
    int x;
    x=10>8>4;
    printf("output of p3 is %d\n",x);
    x=!2>-2;
    printf("output of p4 is %d\n",x);
    x=3<0&&5>0;
    printf("output of p5 is %d\n",x);
    return 0;
}