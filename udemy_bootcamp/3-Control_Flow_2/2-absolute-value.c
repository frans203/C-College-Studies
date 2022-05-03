#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    printf("Set a value to number: ");
    scanf("%d", &number);
    if(number > 0){
        printf("Absolute value of |%d| is: %d", number, number);
    }else{
        printf("Absolute value of |%d| is: %d",number, number * -1);
    }
    return 0;
}