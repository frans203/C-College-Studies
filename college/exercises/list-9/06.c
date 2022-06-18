#include <stdio.h>

int M, N;

int arrSum(int arr[M][N]){
    int sum = 0;
    for(int i=0;i<M;i++){
        for (int j=0;j<N;j++){
            sum = sum + arr[i][j];
        }
    }
   
    return sum;
}

int main(){
    int sum;
    printf("Define num of rows for the array: ");
    scanf("%d", &M);

    printf("Define num of columns for the array: ");
    scanf("%d", &N);

    int arr[M][N];
     for(int i=0;i< M;i++){
        for (int j=0;j< N;j++){
            printf("Enter value for arr[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    sum = arrSum(arr);
    printf("The sum of all elements is: %d", sum);

    return 0;
}