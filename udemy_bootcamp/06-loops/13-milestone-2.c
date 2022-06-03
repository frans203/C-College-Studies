#include <stdio.h>

int main(){
    int i, j;
    float cents = 0.01;
    for ( i = 1; i <= 30; i++)
    {
       printf("Day %d: %f \n", i, cents);
       cents = cents * 2.0; 
    }
    printf("Total amount after 30 days is: %.2f", cents);
    
    return 0;
}