#include <stdio.h>

int main() {
    float a1, an;
    int n;
    printf("Set the first term: ");
    scanf("%f", &a1);
    printf("Set the last term: ");
    scanf("%f", &an);
    printf("Set the quantity of terms: ");
    scanf("%d", &n);
    printf("The sum of the sequence is: %f", (a1 + an)*n/2);
}