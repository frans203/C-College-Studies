 #include <stdio.h>
 #include <math.h>

 int main() {
     int x;
     printf("Enter a value to X: ");
     scanf("%d", &x);
     printf("%d", x);
     printf("X power 2: %.2f \n", pow(x, 2));
     printf("X power 4: %.2f \n", pow(x, 4));
     printf("X power 6: %.2f \n" , pow(x, 6));
     printf("X power 8: %.2f \n", pow(x, 8));


     return 0;
 }