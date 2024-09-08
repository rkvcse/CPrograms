#include<stdio.h>
int main(){
    float costPrice,sellingPrice,loss=0,profit=0;
    printf("Enter the cost price of one dozen ");
    scanf("%f",&costPrice);
    printf("Enter the selling price of one dozen ");
    scanf("%f",&sellingPrice);
    if(costPrice>sellingPrice){
        loss = (costPrice-sellingPrice);
        printf("loss on selling = %f",(loss)*(25.00/12.00));
    }else if(costPrice < sellingPrice){
        profit = (sellingPrice-costPrice);  
        printf("profit on selling = %f",(profit)*(25.00/12.00));
    }
    return 0;
}