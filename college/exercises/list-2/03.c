#include <stdio.h>
#include <math.h>
int main() {
    char form;
    float recB, recH, radius, triB, triH, romB, romS, trapBB, trapSB, trapH;
    printf("Select a form (rectangle, circle, triangle, rhombus and trapeze) by choosing the first character of the form you want (OBS: use l for rhombus, p for trapeze): ");
    scanf("%c", &form);

    if(form == 'r'){
        printf("Enter value for rectangle base: ");
        scanf("%f", &recB);

        printf("Enter value for rectangle heigth: ");
        scanf("%f", &recH);

        printf("Area: %f", recB * recH);
    }
    if(form == 'c'){
         printf("Enter value for radius: ");
         scanf("%f", &radius);
         printf("Area: %f", 3.1416 * pow(radius, 2));
    }
    if(form == 't'){
        printf("Enter value for triangle base: ");
        scanf("%f", &triB);

        printf("Enter value for triangle heigth: ");
        scanf("%f", &triH);

        printf("Area: %f", (triB * triH)/2);
    }

    if(form == 'l'){
        printf("Enter value for rhombus base: ");
        scanf("%f", &romB);

        printf("Enter value for rhombus heigth: ");
        scanf("%f", &romS);

        printf("Area: %f", (romB * romS)/2);
    }

    if(form == 'p'){
        printf("Enter value for trapeze big base: ");
        scanf("%f", &trapBB);

        printf("Enter value for trapeze small base: ");
        scanf("%f", &trapSB);

        printf("Enter value for trapeze heigth: ");
        scanf("%f", &trapH);

        printf("Area: %f", ((trapBB + trapSB) * trapH )/2);
    }


    return 0;
}