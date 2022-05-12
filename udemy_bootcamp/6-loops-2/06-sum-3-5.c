#include <stdio.h>

int main(){
    int i;
    int num, sum = 0;;
    printf("Enter a value for num: ");
    scanf("%d", &num);
    //trivial solution
    // for ( i = 1; i <= num; i++)
    // {
    //     if(i % 3 == 0 && i % 5 == 0){
    //         printf("%d Can be divided by 5 & 3 \n", i);
    //         sum = sum + i;
    //     }
    //     printf("Sum: %d", sum);
    // }

    for ( i = 15; i <= num; i=i+15)
    {
        printf("%d Can be divided by 5 & 3 \n", i);
        sum = sum + i;
    }
        printf("Sum: %d", sum);
    
    return 0;

}