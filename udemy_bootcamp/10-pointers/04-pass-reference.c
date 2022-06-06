#include <stdio.h>

//modify be reference
//send from de main send the addresses of min and max value
//make the values that is being hold for that addresses equal to the max and min respectively

void findMaxMin(int num1, int num2, int *pMax, int *pMin){
    if(num1>num2){
         *pMin = num2;
         *pMax = num1;
    }else{
         *pMin = num1;
         *pMax = num2;
    }
}

int main(){
    int a=5, b=7, max, min;
    findMaxMin(a,b, &max, &min);
    printf("Between %d %d\nmax = %d\nmin = %d", a, b, max);
    return 0;
}