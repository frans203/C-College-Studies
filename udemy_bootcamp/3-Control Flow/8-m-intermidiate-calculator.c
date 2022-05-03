#include <stdio.h>
#include <stdlib.h>

int main() {
    char symbol;
    int num1, num2;
    printf("Enter a symbol for the calculation(+, /, -,...): ");
    scanf("%c", &symbol);
    printf("enter a value for num1: ");
    scanf("%d", &num1);
    printf("enter a value for num2: ");
    scanf("%d", &num2);
    
    
    switch (symbol)
    {
    case '+':
        printf("%d %c %d: %d", num1, symbol, num2, num1 + num2);
        break;
    case '-':
        printf("%d %c %d: %d", num1, symbol, num2, num1 - num2);
        break;
    case '/':
        if(num2 == 0)
            printf("You Cannot divide by 0!");
        else
            printf("%d %c %d: %d", num1, symbol, num2, num1 / num2);
        break;
     case '%':
        if(num2 == 0)
            printf("You Cannot divide by 0!");
        else
            printf("%d %c %d: %d", num1, symbol, num2, num1 % num2);
        break;
    case '*':
        printf("%d %c %d: %d", num1, symbol, num2, num1 * num2);
        break;
    default:
        printf("something went wrong");
        break;
    }

    return 0;
}