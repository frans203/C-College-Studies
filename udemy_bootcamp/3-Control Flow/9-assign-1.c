#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    printf("Set a value for num1: ");
    scanf("%d", &num1);
     printf("Set a value for num2: ");
    scanf("%d", &num2);
    if(num1 == num2){
        printf("EQUAL");
    }else{
        printf("NOT EQUAL");
    }
    return 0;
}