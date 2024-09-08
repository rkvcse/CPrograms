#include<stdio.h>
int main(){
    float length, width, area;
    printf("Enter the length and width: ");
    scanf("%f %f", &length,&width);
    area = length*width;
    printf("area of rectangle = %f",area);
    return 0;
}