#include <stdio.h>

int main(){
    int number = 7;
    int value = 0;
    for (int i = 0; value <= 100; i++)
    {
        value = number * i;
        if(value <= 100){
         printf("Multiples of %d \n", value);
        }
    }
    
    return 0;
}