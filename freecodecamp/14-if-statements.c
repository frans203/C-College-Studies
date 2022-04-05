#include <stdio.h>
#include <stdlib.h>
 
int maxValue(int num1, int num2, int num3) {
    int result;
    if(num1 >= num2 && num1 >= num3){
        result = num1;
    }else if(num2 >= num1 && num2 >= num3) {
        result = num2;
    }else{
        result = num3;
    }
    return result;
}

int main() {
    //&& all of the items need to be true || if one of the items its true, the if block runs equality is ==, not equal != v
    if(!(3<2)){ //with ! i can change the boolean state of the item
        printf("true \n");
    }
    printf("%d", maxValue(422,30, 95));
    return 0;
}