#include <stdio.h>

int main(){
    //to print the address of an array element use %lu
    int i, j;
    int arr[5] = {1,2,3,4,5};
    int mat[2][3] = {{1,3,5},{2,4,6}};
    printf("First element address: %lu\n", &arr[0]);
    printf("Second element address: %lu\n", &arr[1]);

    for(i = 0; i < 2; i++){
      for(j = 0; j < 3; j++){
        printf("Address of mat[%d][%d] = %lu \n", i, j, &mat[i][j]);

      }
    }
      
    return 0;
}