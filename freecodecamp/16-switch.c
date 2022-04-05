#include <stdint.h>
#include <stdio.h>

int main() {
    char grade = 'F';
    switch(grade) {
        case 'A' : 
            printf("You did great!");
            break;
        case 'B': 
            printf("You did alright!");
            break;
        case 'C':
            printf("You did poorly");
            break;
        case 'D':
            printf("You did bad");
            break;
        case 'F':
            printf("You Failed");
            break;
        default: 
            printf("Invalid Grade");
            break;
    }
    return 0;
}