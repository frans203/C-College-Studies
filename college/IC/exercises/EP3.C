#include <stdio.h>
#include <math.h>

int main(){
    double l1, l2;
    printf("Enter a value for first side of the rectangle: ", l1);
    scanf("%lf", &l1);
    printf("Enter a value for second side of the rectangle: ", l2);
    scanf("%lf", &l2);

    printf("Area: %.2lf \n",l1 * l2 );
    printf("Perimeter: %.2lf \n ",2*(l1 + l2 ));
    printf("Diagonal: %.2lf \n", sqrt(pow(l1, 2) + pow(l2, 2)));

    return 0;
}