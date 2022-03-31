#include <stdio.h>
#include <stdlib.h>

int main() {
    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age); //&+variable is called a pointer, when you use scanf you need to use &
    // printf("Your age is %d", age);

    // double gpa;
    // printf("Enter your gpa: ");
    // scanf("%lf", &gpa); //to grab a value as a double from the user we need to put %lf instead of just %f, like on the printf
    // printf("Your gpa is %f", gpa);

    // char grade;
    // printf("Enter your grade: ");
    // scanf("%c", &grade);
    // printf("Your grade is: %c", grade);
    const int maximumValue = 100;
    char name[30]; // I want C to know how many characters that string will have
    printf("Enter your name(maximum of %d characters): \n", maximumValue);
    // scanf("%s", name); //You don't need the & for grab a string from the user
    //OBS: if you enter something with space, anything after the space will not be shown, that why we use fgets:
    fgets(name, maximumValue, stdin); //stdin = standard information
    printf("Entered name is %s", name);
    


    return 0;
}