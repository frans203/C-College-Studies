#include <stdio.h>
#include <stdlib.h>

int main() {
    char value;
	int numberValue;
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
			numberValue = (int)value;
			if((int)numberValue>=97 && (int)numberValue<=122){
				printf("consonant");
			}else if((int)numberValue>=65 && (int)numberValue<=90){
				printf("consonant");
			}
			// if(((int)numberValue>=65 && (int)numberValue<=90) || ((int)numberValue>=97 && (int)numberValue<=122)){

			// 	printf("Consonant %s", value);

            // }
            if((value >= 48) && (value <=57)){
                printf("number %d\n", value);
            }
        }


    }
    return 0;
}