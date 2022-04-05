#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student {
    char name[100];
    char major[50];
    int age;
    double gpa;

};

int main() {
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Josh Williams");
    strcpy(student1.major, "Computer Science");

    printf("%s \n", student1.major); //remember to put %s to print a string

    struct Student student2;
    student2.age = 19;
    student2.gpa = 3.8;
    strcpy(student2.name, "Guilda Lockheart");
    strcpy(student2.major, "Computer Science");

    printf("%s \n", student2.name); //remember to put %s to print a string

    return 0;
}