#include <stdio.h>
 

int main(){
    int number = 3;
    int value = 0;
    int sum = 0;
    for (int i = 1; value < 5000; i++)
    {   
        value = number * i;
         if(value < 5000){
            sum = sum + value;
            printf("value: %d, sum: %d \n", value, sum);
        }
    }
    printf("sum: %d", sum);
    
    return 0;
}