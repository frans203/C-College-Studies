#include <stdio.h>

int main() {
    //write a program that calculates and prints: An( the n-th therm of the sequence)
    //an = a1 + (n - 1)*d
    //sequence = 1, 3, 5.. ; find an;
    float a1, d;
    int n;
    printf("Enter the inital term:");
    scanf("%f", &a1);

    printf("Enter the difference: ");
    scanf("%f", &d);

    printf("Enter the quantity of terms: ");
    scanf("%d", &n);

    printf("hte n-th term of the airthmetic sequence is: %f", a1 + (n - 1)*d);



    return 0;
}