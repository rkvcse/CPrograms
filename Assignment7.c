#include<stdio.h>
int p1(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num>0){
        printf("given number is positive");
    }else{
        printf("given number is non positive");
    }
    return 0;
}
int p2(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num%5==0){
        printf("given number is divisible by 5");
    }else{
        printf("given number is non divisible by 5");
    }
    return 0;
}
int p3(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num%2==0){
        printf("given number is even");
    }else{
        printf("given number is odd");
    }
    return 0;
}
int p4(){ 
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num/2*2==num){
        printf("given number is even");
    }else{
        printf("given number is odd");
    }
    return 0;
}
int p5_1(){ 
    int num,d;
    printf("Enter a number : ");
    scanf("%d",&num);
    d = num>>1;
    if(d*2==num){
        printf("given number is even");
    }else{
        printf("given number is odd");
    }
    return 0;
}
int main(){ 
    int num,d;
    printf("Enter a number : ");
    scanf("%d",&num);
   
    if(num&1){
        printf("given number is odd");
    }else{
        printf("given number is even");
    }
    return 0;
}