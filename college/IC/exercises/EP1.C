#include <stdio.h>

int main(){
    int n1, n2, n3;
    printf("Enter a value for n1: ", n1);
    scanf("%d", &n1);
    printf("Enter a value for n2: ", n2);
    scanf("%d", &n2);
    printf("Enter a value for n3: ", n3);
    scanf("%d", &n3);

    printf("Sum: %d \nProduct: %d \nAverage: %d", n1 + n2 + n3, n1 * n2 * n3, (n1 + n2 + n3)/3);


    return 0;
}