#include <stdio.h>
#define N 5
    int main() {
        int i, j, a, number[5];
        printf("Enter the numbers(5 numbers for the array): \n");
        for (i = 0; i < N; i++)
            scanf("%d", &number[i]);
 
        for (i = 0; i < N; i++) 
        {
            for (j = i + 1; j < N; j++)
            {
                if (number[i] > number[j]) 
                {
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
 
        printf("Numbers of the array in ascending order: \n");
        for (i = 0; i < N; ++i)
            printf("%d\n", number[i]);

        return 0;
 
    }