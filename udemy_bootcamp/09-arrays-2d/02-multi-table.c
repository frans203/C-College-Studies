#include <stdio.h>
#include <stdlib.h>

#define SIZE 11
int main(){
    int i,j;
    int mat[SIZE][SIZE];

    for(i=0;i<SIZE;i++){
        for (j=0; i<SIZE; j++)
        {
           mat[i][j] = i * j;
        }
        
    } 

    for(i=0;i<SIZE;i++){
        for (j=0; i<SIZE; j++)
        {
           printf("%d ", mat[i][j]);
        }
        printf("\n");
        
    } 
    return 0;
}