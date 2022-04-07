#include <stdio.h>

int main() {
    int age, dependents;
    float yearSalary;
    printf("Set age: ");
    scanf("%d", &age);

    printf("Set quantity of dependents: ");
    scanf("%d", &dependents);

    printf("Set year salary: ");
    scanf("%f", &yearSalary);

    if((age > 65 || age < 21) && yearSalary < 80000){
        printf("Tax Exempt");
    }

    if((age > 65 || age < 21) && yearSalary > 80000){
         if(dependents > 10){
          printf("Tax: %f", 0.15*yearSalary - 5000);
         }else{
          printf("Tax: %f", 0.15*yearSalary - dependents * 500);
         }
    }

    if((age>21 && age<65) && (yearSalary > 80000 && yearSalary < 150000)){
         if(dependents > 10){
          printf("Tax: %f", 0.12*yearSalary - 5000);
         }else{
          printf("Tax: %f", 0.12*yearSalary - dependents * 500);
         }
    }

    if((age>21 && age<65) && (yearSalary > 150000)){
         if(dependents > 10){
          printf("Tax: %f", 0.20*yearSalary - 6000);
         }else{
          printf("Tax: %f", 0.20*yearSalary - dependents * 500);
         }
    }
    return 0;
}