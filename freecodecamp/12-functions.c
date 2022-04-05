#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age) {
    printf("Hello %s, your age is %d \n", name, age);
    return;
}

int main() {
    sayHi("Mike ", 23);
    sayHi("Saint ", 45);
    sayHi("Anna ", 55);
    return 0;
}

