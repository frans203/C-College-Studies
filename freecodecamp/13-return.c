#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cube(double num){
    return pow(num, 3); 
}
//to create a function below main, in this example, put the double cube(double num) above and the proper function below the main. That's called prototyping

int main() {
    printf("Answer: %f", cube(3.0));  //%f for print doubles
    return 0;
}