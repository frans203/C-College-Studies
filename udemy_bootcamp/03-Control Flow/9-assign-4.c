#include <stdlib.h>
#include <stdio.h>

int main() {
    float number;
    printf("Set a value to number:");
    scanf("%f", &number);
    if(number > 0){
        printf("1");
    }else if(number == 0){
        printf("0");
    }else{
        printf("-1");
    }
    return 0;
}