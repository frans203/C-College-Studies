#include <stdio.h>
#include <math.h>
float volume(float radius){
    return ((4.0/3)*22/7*pow(radius, 3)); //remeber to use 22/7 to return PI
}

int main(){
    float rad;
    double vol;
    printf("Enter radius for the sphere: ");
    scanf("%f", &rad);
    vol = volume(rad);
    printf("Volume of the sphere is: %.2f m3", vol);
    return 0;
}