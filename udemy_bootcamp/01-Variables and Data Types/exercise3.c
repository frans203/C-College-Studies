#include <stdio.h>

int main() {
    float height, width;
    printf("Enter a width: ");
    scanf("%lf", &width);

    printf("Enter a height: ");
    scanf("%lf", &height);

    printf("Perimeter of the rectangle is: %lf", 2 * width + 2 * height);
    return 0;
}