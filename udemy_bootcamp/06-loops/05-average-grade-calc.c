#include <stdio.h>

int main() {
    //MY RESULT:
    // float result, curNumber;
    // int i = 0;
    // while(curNumber != -1){
    //     printf("Enter a grade:");
    //     scanf("%f", &curNumber);
    //     if(curNumber != -1){
    //      result = result + curNumber;
    //      i++;
    //     //  printf("%d", i);
    //     }
        
    // }
    // printf("%f", result/i);
    // return 0;

    int grade;
    int totalSum = 0, gradeCount = 0;

    printf("Please enter your grade or '-1' to stop: ");
    scanf("%d", &grade);

    while (grade != -1){
        totalSum = totalSum + grade;
        gradeCount++;
        printf("Please enter you grades or '-1' to stop: ");
        scanf("%d", &grade);
    }
    printf("You've entered %d grades! \n", gradeCount);
    if(gradeCount !=0){
    printf("The average is: %.2f \n", (float)totalSum/gradeCount);

    }else{
        printf("Error: GradeCount variable is zero");
    }
    

}