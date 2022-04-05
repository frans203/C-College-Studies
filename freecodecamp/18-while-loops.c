#include <stdio.h>
#include <stdlib.h>

int main() {
    int index = 1;
    // while(index <= 5) {
    //     printf("%d \n", index);
    //     index++; //index = index + 1
    // }

    do {
        printf("%d \n", index); //the difference between that and the one above is if the index, in this case, is greater than 5, it will be printed a unique time only
    }while(index<=5);
    return 0;
}