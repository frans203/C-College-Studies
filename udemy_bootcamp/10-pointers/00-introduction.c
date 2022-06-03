#include <stdio.h>

void swap(int num1, int num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main(){
    int a = 5, b = 7;
    printf("a and b before swap: %d %d \n", a,b);
    swap(a, b); //nothing really happened
    //that's why we need to use pointers, passing the address of the a and b variables and change its values
    printf("a and b after swap: %d %d \n", a,b);
    return 0;
}