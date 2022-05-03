#include <stdio.h>
#include <stdlib.h>

int main () {
    int salary;
    printf("Enter your current salary: ");
    scanf("%d", &salary);
    if(salary <= 1800){
        printf("your salary will be: %.2f \n previous salary: %d \n percentage increase: %.2f \n increase value: %.2f", salary * 1.2, salary, (salary * 1.2 / salary) - 1.0, salary * 1.2 - salary);
    }
    if(salary > 1800 && salary <= 3000){
        printf("your salary will be: %.2f \n previous salary: %d \n percentage increase: %.2f \n increase value: %.2f", salary * 1.15, salary, (salary * 1.15 / salary) - 1.0, salary * 1.15 - salary);
    }
    if(salary > 3000 && salary < 5000){
        printf("your salary will be: %.2f \n previous salary: %d \n percentage increase: %.2f \n increase value: %.2f", salary * 1.10, salary, (salary * 1.10 / salary) - 1.0, salary * 1.10 - salary);
    }
    if(salary >= 5000){
         printf("your salary will be: %.2f \n previous salary: %d \n percentage increase: %.2f \n increase value: %.2f", salary * 1.05, salary, (salary * 1.05 / salary) - 1.0, salary * 1.05 - salary);
    }
    return 0;
}
