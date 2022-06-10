#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countVowels(char str[]){
    int count = 0;
    int i=0;
    for(i;i<strlen(str);i++){
        char c=str[i];
         if(c == 'a' || c == 'e'|| c == 'i'|| c == 'o'|| c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            count++;
        }
       }
       return count;
}
int countConsonants(char str[]){
    int count = 0;
    int i=0;
    for(i;i<strlen(str);i++){
        char c=str[i];
        if(c == 'a' || c == 'e'|| c == 'i'|| c == 'o'|| c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            continue;
        }else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            count++;
        }
       }
       return count;
}

int countLowerOrUpper(char str[], int verify){
    int i=0;
    int count = 0;
    for(i;i<strlen(str);i++){
        if((str[i]>='A' && str[i]<='Z')&&verify==1){
            count++;
        }
          if((str[i]>='a' && str[i]<='z')&&verify==2){
            count++;
        }
    }
    return count;
}

void alphabeticOrder(char *arr[]){
   char temp[100];
   for(int i=0;i<3;i++){
       for(int j=i+1;j<3;j++){
           if(strcmp(arr[i], arr[j])>0){
               strcpy(temp, arr[i]);
               strcpy(arr[i], arr[j]);
               strcpy(arr[j], temp);
           }
       }
   }
   printf("The First String in alphabetic order:\n");
//    for(int i=0;i<3;i++){
//       printf("%s\n",arr[i]);
//    }
   puts(arr[0]);
   printf("The Last String in alphabetic order:\n");
   puts(arr[2]);
  
}

void countString(char *arr[]){
    int countBig = 0;
    int countSmall = 100000; 
    char bigString[100];
    char smallString[100];
    for(int i=0;i<3;i++){
        if(strlen(arr[i])>countBig){
           countBig = strlen(arr[i]);
           strcpy(bigString, arr[i]);
        }
    }
    printf("Bigger string is: ");
    puts(bigString);
    for(int i=0;i<3;i++){
        if(strlen(arr[i])<countSmall){
           countSmall = strlen(arr[i]);
           strcpy(smallString, arr[i]);
        }
    }
    printf("Smaller string is: ");
    puts(smallString);
}
    


int main(){
    // char str1[]="jose",str2[]="albino",str3[]="ze";
    char *arr[3];
    for(int i=0;i<3;i++){
        arr[i] = malloc(1 * sizeof(char)); /* allocates 100 bytes */
        printf("enter value for string arr[%d]: ", i);
        scanf("%99s", arr[i]);
    }

    // for(int i=0;i<3;i++){
    //   printf("%s\n", arr[i]);
    // }

    for (int i = 0; i < 3; i++)
    {   
        printf("string: %s; count vowels: %d; count consonants: %d;count upper:%d; count lower: %d; length: %d \n", arr[i], countVowels(arr[i]), countConsonants(arr[i]), countLowerOrUpper(arr[i], 1), countLowerOrUpper(arr[i], 2), strlen(arr[i]));
    }
    alphabeticOrder(arr);
    countString(arr);
    
    return 0;
}