#include<stdio.h>
#include<stdlib.h> 
int main(){
    int num,rem;
    printf("Enter any number : ");
    scanf("%d", &num);
    rem = num/10;
    printf("number excluding last digit of %d is %d",num,rem);
    return 0;
}
int p3(){
    int num,rem;
    printf("Enter any number : ");
    scanf("%d", &num);
    rem = num%10;
    printf("last digit of %d is %d",num,rem);
    return 0;
}
int p2(){
    char char1,char2,char3;
    printf("Enter first character : ");
    scanf("%c", &char1);
    fflush(stdin);
    printf("Enter second character : ");
    scanf("%c", &char2);
    fflush(stdin);
    printf("Enter third character : ");
    scanf("%c", &char3);
    fflush(stdin);
    printf("ASCII Value of %c is %d\nASCII Value of %c is %d\nASCII Value of %c is %d\n",char1,char1,char2,char2,char3,char3);
    return 0;
}
int p1(){
    int code;
    printf("Enter any ASCII code : ");
    scanf("%d", &code);
    printf("Character is %c having ASCII code %d",code,code);
    return 0;
}
