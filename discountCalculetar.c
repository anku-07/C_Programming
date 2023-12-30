// Write a discout calculetar
#include<stdio.h>
int main(){
    float purchaseAmount,discount,discountedPrice,totalPrice;

    printf("Enter your purchase amount for check you are eligiable for discount : ");
    scanf("%f",&purchaseAmount);

    if(purchaseAmount > 1000){
        discount = 0.10;
    }else{
        discount = 0.00;
    }

    discountedPrice = purchaseAmount * discount;
    totalPrice = purchaseAmount - discountedPrice;
    printf("Total cost after applying discount : $%0.2f",totalPrice);

    return 0;
}