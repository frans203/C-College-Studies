#include <stdio.h>
 
int main(){
    int n;
    int i = 1;
    char currentAnimal;
    int currentQuantity;
    int totalCoelhos = 0, totalRatos = 0, totalSapos = 0, totalAnimals = 0;
    scanf("%d", &n);
    for (i; i <= n; i++)
    {
        scanf("%d %c", &currentQuantity, &currentAnimal );
        totalAnimals += currentQuantity;
        if(currentAnimal == 'C'){
            totalCoelhos += currentQuantity;
        }else if(currentAnimal == 'R'){
            totalRatos += currentQuantity;
        }else if(currentAnimal == 'S'){
            totalSapos += currentQuantity;
        }
    }
    printf("Total: %d \n", totalAnimals);
    printf("Total de coelhos: %d \n", totalCoelhos);
    printf("Total de ratos: %d \n", totalRatos);
    printf("Total de sapos: %d \n", totalSapos);
    printf("Percentual de coelhos: %.2lf %%\n", (float) totalCoelhos * 100.00 /totalAnimals );
    printf("Percentual de ratos: %.2lf %%\n", (float) totalRatos * 100.00 / totalAnimals );
    printf("Percentual de sapos: %.2lf %%\n", (float) totalSapos * 100.00 / totalAnimals );

    return 0;
}