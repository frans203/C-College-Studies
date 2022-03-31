#include <stdio.h>
#include <stdlib.h>

int main() {
    const int NUM = 5; //with const you can't modify the values of a variable once you assign a value to it.
    printf("%d \n", NUM);
    // NUM = 8;
    printf("%d \n", NUM);

    return 0;
}