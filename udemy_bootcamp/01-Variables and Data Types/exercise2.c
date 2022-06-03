#include <stdio.h>

int main() {
    double height, width;

    printf("Enter a width: ");
    scanf("%lf", &width);

    printf("Enter a height: ");
    scanf("%lf", &height);

    printf("Area of the rectangle is: %lf", width * height);


    return 0;
}