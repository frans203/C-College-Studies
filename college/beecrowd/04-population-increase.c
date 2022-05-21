#include <stdio.h>

int main(){
    int t, pa, pb, dif, na, nb, years;
    double g1, g2;
    scanf("%d", &t);
    if(t >= 1 && t <= 3000){
        for(int i=1; i<=t; i++){
            scanf("%d %d %lf %lf", &pa,&pb,&g1,&g2);
                    years = 0;
                    while (pa <= pb){
                        pa = pa + pa*(g1/100);
                        pb = pb + pb*(g2/100);
                        years++;
                        if(years>100){
                            break;
                        }
                    }
                    if(years > 100){
                        printf("Mais de 1 seculo.\n");
                    }else{
                        printf("%d anos.\n", years);
                    }
                
        }
    }
    return 0;
}