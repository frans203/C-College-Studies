#include <stdio.h>

int main() {
    float salary, loan, render, months;
    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Enter loan: ");
    scanf("%f", &loan);

    printf("Enter render: ");
    scanf("%f", &render);

    printf("Enter months: ");
    scanf("%f", &months);
    if(
        render > salary * 0.2
        || loan > 8 * salary 
        || (months > 120 && months < 12) 
        || (render * months < loan * 1.2) 
        || (salary <= 0 || render <= 0 || loan <= 0) )  {
        printf("Loan not allowed");
    }else{
        printf("Loan Allowed");
    }
    
  
    return 0;
}