#include <stdio.h>

int main(){
    int price, totalPrice = 0;
    do
    {
        printf("Enter a value for price: ");
        scanf("%d", &price);
        totalPrice = totalPrice + price;
    } while (price != 0);
    printf("Total price is: %d", totalPrice);
    
    return 0;
}