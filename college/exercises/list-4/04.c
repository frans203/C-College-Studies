#include <stdio.h>
#include <stdlib.h>

int main(){
    int option, quantity;
    float finalValue;
    printf("Select an option of lunch by the code: \n100 | Cachorro quente | R$ 3,70 \n101 | Bauru Simples   | R$ 4,30 \n102 | Bauru com ovo   | R$ 4,60\n103 | Hamburguer      | R$ 4,40\n104 | Cheeseburguer   | R$ 4,50\n105 | Refrigerante    | R$ 3,00 \n");
    scanf("%d", &option);
    printf("Enter a quantity of the product: ");
    scanf("%d", &quantity);
    switch (option)
    {
    case 100:
        printf("Quantity: %d || Value to pay: %.2f", quantity, 3.7*quantity);
        break;
     case 101:
        printf("Quantity: %d || Value to pay: %.2f", quantity, 4.3*quantity);
        break;
     case 102:
        printf("Quantity: %d || Value to pay: %.2f", quantity, 4.6*quantity);
        break;
     case 103:
        printf("Quantity: %d || Value to pay: %.2f", quantity, 4.4*quantity);
        break;
     case 104:
        printf("Quantity: %d || Value to pay: %.2f", quantity, 4.5*quantity);
        break;
     case 105:
        printf("Quantity: %d || Value to pay: %.2f", quantity, 3.0*quantity);
        break;
    default:
        break;
    }

    return 0;
}