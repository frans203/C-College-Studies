#include <stdio.h>

#define N 15

int main(){
int vector[N], vector_aux[N], cont_aux = 0;

for (int i = 0; i < N; i++){
  printf("Write the element [%d]: ", i);
  scanf("%d", &vector[i]);
  }

for (int i = 0; i < N; i++){
  if (vector[i] != 0){
    vector_aux[cont_aux] = vector[i];
    cont_aux ++;
  }

}

for (int i = 0; i < cont_aux; i++){
  printf("vector %d: %d\n", i, vector_aux[i]);
  }

return 0;
}