#include <stdio.h>
#define MAX 10
#define SUM 20

int sumArr(int arr1[MAX], int arr2[MAX], int arrSum[SUM]){
    int k=0;

    for(int i=0;i<MAX;i++){
      arrSum[i] = arr1[i];
        
    }
    for(int i=MAX;i<SUM;i++){
      arrSum[i] = arr2[k];
      k++;
    }
    return 0;
}

int main(){
    int arr1[MAX] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[MAX] = {11,12,13,14,15,16,17,18,19,20};
    int arrSum[SUM];

    sumArr(arr1, arr2, arrSum);
    printf("Elements of the two arrays merged: \n");
     for(int i=0;i<SUM;i++){
        printf("%d \n", arrSum[i]);
    }

    

    return 0;
}