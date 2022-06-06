#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int card[4][5];


int main(){
    int n = 10;
    time_t t;
    srand((unsigned) time(&t));
    
    for(int a=0;a<4;a++){
        for(int b=0;b<5;b++){
            int value =(rand() % 50) + (rand() % 49);
            card[a][b]=rand()%99;
        }
    }

    for(int i = 0; i<4;i++){
        for(int j = 0;j<5;j++){
            printf("%d ", card[i][j]);
        }
        printf("\n");
    }
    return 0;
}

