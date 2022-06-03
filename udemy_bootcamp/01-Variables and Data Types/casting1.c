#include <stdint.h>
#include <stdio.h>

int main() {
    int num1 = 5;
    int num2 = 2; //making one of the variables to be double the result will be a double too. Therefore displaying all the decimal characters.
    double result;
    result = (double)num1/(double)num2; 
    printf("Result: %lf \n", result);

    

    return 0;
}