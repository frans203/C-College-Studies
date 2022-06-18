#include <stdio.h>
#define MAX 15

int biggerArr(int arr[MAX], int evenArr[]){
    int k=0;
    for(int i=0;i<MAX;i++){
        if(arr[i] % 2 == 0){
            evenArr[k] = arr[i];
            k++;
        }
    }
    return k;

}

int main(){
    int arr[MAX] = {1,4,9,10,6,8,32,88,99,10,33,8,3,2,5};
    int evenArr[1000];
    int maxArray;
    

    maxArray = biggerArr(arr, evenArr);
    printf("The even numbers of the array are: \n");
    for(int i=0;i<maxArray;i++){
        printf("%d \n", evenArr[i]);
        
    }
    return 0;

}