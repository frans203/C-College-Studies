#include <stdio.h>
#include <stdlib.h>

int power(int base, int exp)
    {
      if(exp < 0)
        return -1;

        int result = 1;
        while (exp)
        {
            if (exp & 1)
                result *= base;
            exp >>= 1;
            base *= base;
        }

        return result;
}

double findRoot(double number){
    double sqrt;
    sqrt = power(abs(number), 1. / 3.);
    return sqrt;
}
int main(){
    printf("%.2f", findRoot(27));
    return 0;
}