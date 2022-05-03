#include <stdio.h>
#include <math.h>

int main(){
    float x1, y1, x2, y2;
    printf("Set x1:");
    scanf("%f", &x1);
    printf("Set y1:");
    scanf("%f", &y1);
    printf("Set x2:");
    scanf("%f", &x2);
    printf("Set y2:");
    scanf("%f", &y2);
    printf("The distance is: %.2f", sqrt(pow(x1 - x2, 2) + pow(y1-y2, 2)));
    return 0;
}