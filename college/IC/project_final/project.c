#include <stdio.h>
#include <stdlib.h>

// https://www.blogcyberini.com/2017/09/algoritmo-equacao-terceiro-grau.html
//  This function will be called every time we have to add numbers

double add(double numberOne, double numberTwo)
{
    return numberOne + numberTwo;
}

// This will be called every time we have to subtract numbers
double sub(double numberOne, double numberTwo)
{
    return numberOne - numberTwo;
}

// This will be called every time we have to multply numbers
double mult(double numberOne, double numberTwo)
{
    return numberOne * numberTwo;
}

double divi(double dividend, double divisor)
{
    return dividend / divisor;
}

// This will be called every time we have to calculate the power of a number raised to another
//san
int pow(int base, int exp)
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
// This will be called every time we have to calculate the root of a number equal to 0 or grather, from the passed index
double root(double number, double index)
{
    if (number < 0)
    {
        printf("This calculator cannot root negative numbers!");
        return 0;
    }
    double root;
    for (int i = 0; i < index; i++)
    {
        root = number / number;
    }
    return root;
}

// Check if the coefficient A is diferente of 0
void checkCoefficientA(int coefficientA)
{
    if (coefficientA == 0)
    {
        printf("Coefficient A cannot be equal to zero!");
    }
}

// This function is responsible for return the value of delta
double delta(int coefficientA, int coefficientB, int coefficientC)
{
    return (pow(coefficientB, 2) - (4 * coefficientA * coefficientC));
}
//SAN
double findRoot(double number){
    double sqrt, temp;
    sqrt = number / 2;
        temp = 0;
        // Iterate until sqrt is different of temp, that is updated on the loop
        while(sqrt != temp){
            // initially 0, is updated with the initial value of 128
            // (on second iteration = 65)
            // and so on
            temp = sqrt;

            // Then, replace values (256 / 128 + 128 ) / 2 = 65
            // (on second iteration 34.46923076923077)
            // and so on
            sqrt = ( number/temp + temp) / 2.0;
        }
    return sqrt;
}

//SAN
// Here will be calculated the root of quadratic equations in this format ax^2 + bx + c = 0
// The value of the roots will be stored into the vector roots[]
void quadraticEquations(int coefficientA, int coefficientB, double delta, double roots[])
{
    if (delta > 0) {
        roots[0] = (-coefficientB + findRoot(delta)) / (2 * coefficientA);
        roots[1] = (-coefficientB- findRoot(delta)) / (2 * coefficientA);
        printf("root 1 = %.2lf and root 2 = %.2lf", roots[0], roots[1]);
    }

    // condition for real and equal roots
    else if (delta == 0) {
        roots[0] = roots[1] = -coefficientB / (2 * coefficientA);
        printf("root 1 = root 2 = %.2lf;", roots[0]);
    }

    // if roots are not real
    else { 
       printf("The equation hasn't real roots\n");
    }
}



// This funcion reduce the cubic equation to quadratic equation using Briot-Ruffini
void briotRuffini(int coefficientA, int coefficientB, int coefficientC, int coefficientD, double root, int coefficientA2, int coefficientB2, int coefficientC2)
{
    coefficientA2 = coefficientA * root + coefficientB;
    coefficientB2 = coefficientB * root + coefficientC;
    coefficientC2 = coefficientC * root + coefficientD;
}

// First we need to figure out the first root of the equation using P / Q, where P is a divisor of coefficientD and Q is a divisor of coefficientA
void cubicEquation(int coefficientA, int coefficientB, int coefficientC, int coefficientD, double roots[])
{
    /* Condition of existence: a != 0
        Δ = q^2 / 4 + p^3 / 27.
    If:
        Δ = 0, the equation has three real roots and one of them is repeated;
        Δ < 0, the equation has three distincts real roots;
        Δ > 0, the equation has one real root and two conjugate complex roots;
    */

    double p = (-pow(coefficientB, 2) / 3 * pow(coefficientA, 2)) + coefficientC / coefficientA;                                                                         // p = (-b^2/3a^2) + c/a
    double q = ((2 * pow(coefficientB, 3) - (9 * coefficientA * coefficientB * coefficientC) + (27 * pow(coefficientA, 2) * coefficientD)) / 27 * pow(coefficientA, 3)); //(2b^3 - 9abc + 27a^2d) / 27a^3
    double delta = pow(q, 2) / 4 + pow(p, 3) / 27;

    if (delta >= 0 || delta == 0)
    {
        // The firts root using Cardano and Tartaglia and Ferro
        roots[2] = root(-q / 2 + root(delta, 2), 3) + root(-q / 2 + root(delta, 2), 3) - (coefficientB / 3 * coefficientA); // ^3V‾(-(q/2) + V‾(q^2/4) + (p^3/27)) + ^3V‾(-(q/2) + V‾(q^2/4) + (p^3/27)) - (b/3a)

        // The other roots, if are real, apllying Briot-Ruffini to reduce the cubic equation to quadratic equation and calling the bhaskara function
        int coefficientA2, coefficientB2, coefficientC2;
        briotRuffini(coefficientA, coefficientB, coefficientC, coefficientD, roots[0], coefficientA2, coefficientB2, coefficientC2);
        quadraticEquations(coefficientA2, coefficientB2, coefficientC2, roots);
    }
}
//SAN
int factorialOf(int factorial)
{
    int i;
    //defining result variable
    double result = 0;
    //loop over all integer elements from 1 to the factorial number
    for(i = factorial; i > 0; i--){
        if(i == factorial){
            result = i; //the first value needs to be equal to factorial number
        }else{
            result = i * (result); //multiplying the current value with the previous one (Ex: 5*4, after that and 20*3, etc.)
        }
    }
    //printing the result
    printf("result: %.0lf", result);
}

int main(int argc, char const *argv[])
{
    // O valor do coeficiente não pode ser igual a zero
    //  if (coeficienteA == 0) {
    //  printf("Valor do coeficeiente angular deve ser diferente de 0!\n");
    //  sleep(2);
    //  system("clear");
    //  goto coeficienteAngular;
    //  }
    // switch para as operacoes
    // do-while para o loop
    // a interface deve utilizar array para armazenar resultados
    //  if ax^2 + bx + c != 0 -> c + (-resultado)
    //  if  ax^3 + bx^2 + cx + d != 0 -> d + (-resultado)
    //  printf("\n\tTo see how to use, select the guide option below:\n");
    //      printf("\tTo add numbers: +\n");
    //      printf("\tTo subtract numbers: -\n");
    //      printf("\tTo divide numbers: /\n");
    //      printf("\tTo multply numbers: *\n");
    //  roots[1] = root(-q / 2 + root(delta, 2), 3) + root(-q / 2 + root(delta, 2), 3) - (coefficientB / 3 * coefficientA); // z * ^3V‾(-(q/2) + V‾(q^2/4) + (p^3/27)) + Z‾ * ^3V‾(-(q/2) + V‾(q^2/4) + (p^3/27)) - (b/3a)
    //  roots[2] = root(-q / 2 + root(delta, 2), 3) + root(-q / 2 + root(delta, 2), 3) - (coefficientB / 3 * coefficientA); // Z‾ * ^3V‾(-(q/2) + V‾(q^2/4) + (p^3/27)) + z * ^3V‾(-(q/2) + V‾(q^2/4) + (p^3/27)) - (b/3a)

    // char arithmeticExpression[100];
    // printf("\n------------------------- Calculator -------------------------\n");
    // printf("\n\tType your expression or help: ");
    // scanf("%s", arithmeticExpression);
    // printf("\n------------------------- Final Project IC -------------------------\n\n");

    char option;
    double result;

    while (1)
    {

    menu:
        printf("\nSelect the operation: \nTo add numbers: +\nTo subtract numbers: -\nTo multiply numbers: *\nTo divide numbers: /\nTo solve quadratic equations: 2\nTo solve cubic equations: 3\nTo solve factorial of integer Number: f\nTo exit: e\n");
        scanf(" %c", &option);

        switch (option)
        {
        case '+':
        {
            double numberOne, numberTwo;
            printf("Type two numbers: \n");
            scanf("%lf %lf", &numberOne, &numberTwo);
            result = add(numberOne, numberTwo);
            printf("%lf\n", result);
            break;
        }
        case '-':
        {
            double numberOne, numberTwo;
            printf("Type two numbers: \n");
            scanf("%lf %lf", &numberOne, &numberTwo);
            result = sub(numberOne, numberTwo);
            printf("%lf\n", result);
            break;
        }
        case '*':
        {
            double numberOne, numberTwo;
            printf("Type two numbers: \n");
            scanf("%lf %lf", &numberOne, &numberTwo);
            result = mult(numberOne, numberTwo);
            printf("%f\n", result);
            break;
        }
        case '/':
        {
            double numberOne, numberTwo;
            printf("Type two numbers: \n");
            scanf("%lf %lf", &numberOne, &numberTwo);
            if (numberTwo == 0)
            {
                printf("Division by zero is not possible!");
            }
            else
            {
                result = divi(numberOne, numberTwo);
                printf("%lf\n", result);
            }
            break;
        }
        case '2':
        {
            int coefficientA, coefficientB, coefficientC;
            double roots[2];
            printf("Type the integer values of the coefficients A B and C: \n");
            scanf("%d %d %d", &coefficientA, &coefficientB, &coefficientC);
            double deltaResult = delta(coefficientA, coefficientB, coefficientC);
            quadraticEquations(coefficientA, coefficientB, deltaResult,roots);
            break;
        }
        case '3':
        {
            double numberOne, numberTwo;
            printf("Type two numbers: \n");
            scanf("%lf %lf", &numberOne, &numberTwo);
            if (numberTwo == 0)
            {
                printf("Division by zero is not possible!");
            }
            else
            {
                result = divi(numberOne, numberTwo);
                printf("%lf\n", result);
            }
            break;
        }
        //SAN 
        case 'f':{
            int facNum;
            printf("Enter a value: ");
            scanf("%d", &facNum);

            factorialOf(facNum);
            break;
        }
        case 'e':
        {
            printf("Exiting...");
            return 0;
        }
       
        default:
        {
            printf("The selected operator is undefined, please try again or exit.\n");
            goto menu;
        }
        }
    }
}