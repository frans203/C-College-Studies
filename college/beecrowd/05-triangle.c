#include <stdio.h>
#include <stdlib.h>

int verify(int a, int b, int c){
    int isTriangle = 1;
    if(!(a < b+c && a > abs(b-c))){
        isTriangle = 0;
    }else if(!(b < a+c && b > abs(a-c))){
        isTriangle = 0; 
    }else if(!(c < a+b && c > abs(a-b))){
        isTriangle = 0;
    }

    return isTriangle;
}

int main(){
    int a, b, c, d;
    int v1, v2, v3, v4, v5;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    v1 = verify(a, b, c);
    v2 = verify(a, b, d);
    v3 = verify(b, c, d);
    v4 = verify(c, d, a);
    v5 = verify(c, d, b);
    if(v1 == 0 && v2 == 0 && v3 == 0 && v4 == 0 && v5 == 0){
        puts("N");
    }else{
        puts("S");
    }

    return 0;
}