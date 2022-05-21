#include <stdio.h>

int dependetsDiscount(int dependents) {
    int result = dependents * 50;
    if(result >  500){
        result = 500;
    }
    return result;
}

int main(){
    int age, dependents;
    float salary;
    printf("Enter Salary(float):");
    scanf("%f", &salary);
    printf("Enter quantity of dependents:");
    scanf("%d", &dependents);
    printf("Enter age:");
    scanf("%d", &age);

    if(salary < 1500 || age > 65){
        printf("No Discount");
    }else if(salary <= 3000){
        printf("Discount of 5%%: %.2f", salary * 0.05 - dependetsDiscount(dependents));
    }else if(salary > 3000 && salary <= 5000) {
        printf("Discount of 10%%: %.2f", salary * 0.10 - dependetsDiscount(dependents));
    }else if(salary > 5000) {
        printf("Discount of 15%%: %.2f", salary * 0.15 - dependetsDiscount(dependents));
    }

    return 0;
}