#include <stdio.h>
#include <stdlib.h> 

int main() {
    int nums[3][2] = { //creating 2d arrays, array of arrays. 3 elements(arrays), 2 items inside each array
                    {1,2},
                    {3,4},
                    {5,6}
                    }; 
    // nums[0][0] = 3;; define single elements for the arrays
    // printf("%d", nums[1][1]);
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%d, ", nums[i][j]);
        }
        printf("\n");
    }
    return 0;
}