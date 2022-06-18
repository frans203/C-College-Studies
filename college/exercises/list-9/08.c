#include <stdio.h>

int main(){
    int num1 = 23;
    float num2 = 33.5;
    char item = 'a';

    printf("Items before modification\n");
    printf("Integer: %d\n", num1);
    printf("Float: %.3f\n", num2);
    printf("Character: %c\n", item);

    int *pnum1 = &num1;
    float *pnum2 = &num2;
    char *pchar = &item;

    printf("\nAddresses of the items\n");
    printf("Integer: %p\n", pnum1);
    printf("Float: %p\n", pnum2);
    printf("Character: %p\n", pchar);

    *pnum1 = 50;
    *pnum2 = 99.882;
    *pchar = 'x';

    printf("\nItems AFTER modification\n");
    printf("Integer: %d\n", num1);
    printf("Float: %.3f\n", num2);
    printf("Character: %c\n", item);



    return 0;
}