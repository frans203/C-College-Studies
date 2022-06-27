#include <stdio.h>
#define SIZE_A 4
#define SIZE_B 3
#define SIZE_C 5
#define CONCAT 12
void concat(int arr[SIZE_A], int arr2[SIZE_B], int arr3[SIZE_C]){
    int arrConcat[CONCAT];
    for(int i=0;i<SIZE_A;i++){
        arrConcat[i] = arr[i];
    }
    int t = 0;
    for(int i=SIZE_A;i<(SIZE_B + SIZE_A);i++){
        arrConcat[i] = arr2[t];
        t++;
    }
    int k=0;
    for(int i=SIZE_B + SIZE_A;i<(SIZE_C + SIZE_B + SIZE_A);i++){
        arrConcat[i] = arr3[k];
        k++;
    }
    printf("Terms of the array that is the sum of the 3 arrays:\n");
    for(int i=0;i<CONCAT;i++){
        printf("%d\n", arrConcat[i]);
      
    }
    printf("\n");
}

void intersect(int arr[SIZE_A], int arr2[SIZE_B], int arr3[SIZE_C]){
  int i =0, j = 0, k =0;
  while(i < SIZE_A && j < SIZE_B && k <SIZE_C){
    if(arr[i] == arr2[j] && arr2[j] == arr3[k]){
        printf("teste %d", arr[i]);

        i++;
        k++;
        j++;
    }else if(arr[i] <arr2[j]){
        i++;
    }else if(arr2[j] < arr3[k]){
        j++;
    }else{
        k++;
    }
  }
}

void average(int arr[SIZE_A], int arr2[SIZE_B], int arr3[SIZE_C]){
    float sumArr = 0, sumArr2 = 0, sumArr3 = 0;
    for(int i=0;i<SIZE_A;i++){
      sumArr = sumArr + arr[i];
    } 
    for(int i=0;i<SIZE_B;i++){
      sumArr2 = sumArr2 + arr2[i];
    } 
    for(int i=0;i<SIZE_C;i++){
      sumArr3 = sumArr3 + arr3[i];
    }
    printf("The average of arr1 is: %.2f \n", sumArr/SIZE_A);
    printf("The average of arr2 is: %.2f \n", sumArr2/SIZE_B);
    printf("The average of arr3 is: %.2f \n", sumArr3/SIZE_C);
}

int main(){
    int arr1[SIZE_A], arr2[SIZE_B], arr3[SIZE_C];
    for(int i=0;i<SIZE_A;i++){
        printf("enter value for arr1[%d]", i);
        scanf("%d", &arr1[i]);
    }
    for(int i=0;i<SIZE_B;i++){
        printf("enter value for arr2[%d]", i);
        scanf("%d", &arr2[i]);
    }
    for(int i=0;i<SIZE_C;i++){
        printf("enter value for arr3[%d]", i);
        scanf("%d", &arr3[i]);
    }


    concat(arr1, arr2, arr3);
    intersect(arr1, arr2, arr3);
    average(arr1, arr2, arr3);
    return 0;
}