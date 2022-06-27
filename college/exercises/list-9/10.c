#include <stdio.h>
#define PI 3.14159
#include <math.h>


void calc_sphere(float r, float *area, float *volume){
    *area = 4.0 * PI * pow(r,2);
    *volume = (4.0/3.0) * PI * pow(r,3);
}
int main(){
    float area, volume;
    float radius;
    printf("Enter a radius for the sphere: ");
    scanf("%f", &radius);
    calc_sphere(radius, &area, &volume);
    printf("Area of the sphere: %.2f \n", area);
    printf("Volume of the sphere: %.2f\n", volume);
    return 0;
}