#include <stdio.h>
#include <stdlib.h>

int main() {
    //while loop
    // int i = 1;
    // while (i <=5){
    //     printf("%d\n", i);
    //     i++;
    // }

    //FOR LOOP, basically while loop condensed
    //you can set i = i + N, N as a number
    int luckyNumbers[] = {4,5,2,12,3,5,123};
    int i;
    for(i = 0; i <= 6; i++) {
        printf("%d \n", luckyNumbers[i]);
    }
    return 0;
}
