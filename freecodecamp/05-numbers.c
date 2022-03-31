#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int num = 6;
    printf("%f \n", 5.0 * 2); //it will return an float number, because we have an operation with an  float number
    printf("%f \n", 5 / 2.0); //needs to have at least one decimanl number to return an decimanl number.
    printf("%i\n", num);
    printf("%f\n", pow(2, 3)); //2^3 power
    printf("%f\n", sqrt(36)); //print out the square root of 36
    printf("%f\n", ceil(75.333));// round the number up
    printf("%f\n", floor(75.333));// round the number down

    return 0;
}