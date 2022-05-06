#include <stdio.h>

int main() {
    int number;
    do
    {
       printf("Set a value to number: \n");
       scanf("%d", &number);
       printf("Number value is:%d \n", number);
    } while (number != 0);
    
    return 0;
}