#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    float delta;

    printf("Enter a value for a: ", a);
    scanf("%d", &a);
    printf("Enter a value for b: ", b);
    scanf("%d", &b);
    printf("Enter a value for c: ", c);
    scanf("%d", &c); 
    delta = pow(b, 2) - 4*a*c;
    printf("delta: %d \n", delta);

    printf("1st root: %.2f \n", (-b + sqrt(delta))/2*a);
    printf("2st root: %.2f", (-b - sqrt(delta))/2*a);

    return 0;
}