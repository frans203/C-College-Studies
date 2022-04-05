#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';
    printf("%p", &age); //physical memory address. The place where C stored the value of the age variable
    return 0;
}