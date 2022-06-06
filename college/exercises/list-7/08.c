#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int card[4][5];
int card2[4][5];
int card3[4][5];
int cards[3][4][5];


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
    for(int a=0;a<4;a++){
        for(int b=0;b<5;b++){
            int value =(rand() % 50) + (rand() % 49);
            card2[a][b]=rand()%99;
        }
    }
      for(int a=0;a<4;a++){
        for(int b=0;b<5;b++){
            int value =(rand() % 50) + (rand() % 49);
            card3[a][b]=rand()%99;
        }
    }

    for(int i=0;i<3;i++){
             for(int j = 0; j<4;j++){
                for(int k = 0;k<5;k++){
                    if(i==0){
                     cards[i][j][k] = card[j][k];
                    }else if(i==1){
                     cards[i][j][k] = card2[j][k];
                    }else if(i==2){
                     cards[i][j][k] = card3[j][k];
                    }
                }
            }
    }

    for(int i=0;i<3;i++){
         if(i==0){
            printf("\nCARD 1\n");
        }else if(i==1){
            printf("\nCARD 2\n");
        }else if(i==2){
            printf("\nCARD 3\n");
            }
        for(int j = 0; j<4;j++){
          for(int k = 0;k<5;k++){ 
            printf(" %d ", cards[i][j][k] );
          }
             printf("\n");

        }
         

    }
  
    return 0;
}

