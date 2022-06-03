#include <stdio.h>

int main(){
    int x, y;
    printf("Enter a value for coordinate X:");
    scanf("%d", &x);
    printf("Enter a value for coordinate Y:");
    scanf("%d", &y);
    if(x > 0 && y > 0){
        printf("First quadrant");
    }else if(x < 0 && y > 0){
        printf("Second quadrant");
    }else if(x < 0 && y < 0){
        printf("Third quadrant");
    }else if(x > 0 && y < 0){
        printf("Fourth quadrant");
    }
    return 0;
}