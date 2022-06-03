#include <stdio.h>

int main() {
    int num;
    int units, tens, hundreds;
    printf("Enter a number with 3 digits: ");
    scanf("%d", &num);
    units = num % 10;
    hundreds = num / 100;
    tens = (num /10) % 10;
    printf("Total sum of digits in %d is %d\n", num, units + tens + hundreds);
    return 0;
}