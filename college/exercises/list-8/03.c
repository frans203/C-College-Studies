#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

int main(){
    float average[MAX];
    char *names[MAX];
    int bigIndex=0;
    float bigTemp = 0;
    int smallIndex=0;
    float smallTemp = 100000.0;
    float averageSum=0;

    for(int i=0;i<MAX;i++){
        names[i] = malloc(1*sizeof(char));
        printf("Enter student name (names[%d]): ", i);
        scanf("%s", names[i]);
        printf("Enter student score(average[%d]: ", i);
        scanf("%f", &average[i]);
    }

    for(int i=0;i<MAX;i++){
        if(average[i]>bigTemp){
            bigIndex=i;
            bigTemp=average[i];
        }
         if(average[i]<smallTemp){
            smallIndex=i;
            smallTemp=average[i];
        }
        averageSum = averageSum + average[i];
    }
    printf("Bigger score is for the student: %s \n", names[bigIndex]);
    printf("Smaller score is for the student: %s \n", names[smallIndex]);
    printf("Average of the class is: %.2f", averageSum/MAX);

    return 0;
}