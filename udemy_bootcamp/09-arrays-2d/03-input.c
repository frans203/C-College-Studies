#include <stdio.h>
#include <stdlib.h>

#define SIZE 11
int main(){
    int i,j;
    double mat[2][3];
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%lf",&mat[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%.2lf ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}