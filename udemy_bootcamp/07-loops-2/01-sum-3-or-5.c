#include <stdio.h>

int main(){
    int i;
    int num, sum = 0;
    printf("Enter a value for num: ");
    scanf("%d", &num);
    //Trivial solution

    // for (i = 1; i <=num; i++)
    // {
    //     if(i % 3 == 0 || i % 5 == 0){
    //         printf("%d can be divided by either 3 or 5 \n", i);
    //         sum = sum + i;
    //     }
    // }
    //     printf("Sum: %d", sum);



    //Optimal solution
    for(i = 3; i<=num; i = i + 3){
        //wil execute num/3 times (100/3 = 33 times)
        sum = sum + i;
    }
     for(i =5; i<=num; i = i + 5){
        //wil execute num/5 times (100/5 = 20 times)
        if(i%3 != 0){
         sum = sum + i;

        }
    }
   
        printf("Sum: %d", sum);


    
    return 0;
}