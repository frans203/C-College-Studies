#include <stdlib.h>
#include <stdio.h>

int main() {
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);

    if(grade >= 80){
        printf("Excellent Job! \n");
    } else if( grade >= 60){
        printf("Not bad... \n");
    }else{
        printf("You Didn't Pass! \n");

    }
    return 0;
}