#include <stdio.h>
#include <stdlib.h>

int main() {
    char value;
    printf("Enter a character symbol: ");
    scanf("%c", &value);
    switch(value){
        case '^':
		case '"':
		case '~':
		case '\'':
		case '`': {
			printf("%c = accent\n", value);
			break;
		}
        case '.':
		case ':':
		case ',':
		case ';':
		case '?':
		case '!':
		case '-': {
			printf("%c = punctuation\n", value);
			break;
		}
        case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U': {
			printf("letter (vowel)\n", value);
			break;
		}
        default: {
            if((value >= 48) && (value <57)){
                printf("number \n", value);
            }else{
                if( 
                    ((value >= 65) && (value <=90)) 
                    || 
                    ((value >=97) && (value <= 122))){
                        printf("Consonant");
                }else{
                    printf("Error");
                }
            }
        }


    }
    return 0;
}