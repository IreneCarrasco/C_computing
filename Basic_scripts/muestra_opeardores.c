/*Ejemplo 1.9 página 42 Programación estructurada en C*/
/*Ejemplo de muestra de operadores de asignación compuestos*/

#include <stdio.h>

int main(void)
{
    int number;

    number = 20;
    printf("Current value is: %d \n", number);
    number += 5;
    printf("The operator += adds a number to the original value \n");
    printf("Current value is now: %d \n", number);
    number -= 3;
    printf("The operator -= subtracts a number to the current value \n");
    printf("Current value is now: %d \n", number);
    number *= 2;
    printf("The operator *= multiplies a number to the current value \n");
    printf("Current value is now: %d \n", number);
    number /= 4;
    printf("The operator /= divides the current value by a number \n");
    printf("Current value is now: %d \n", number);
    number %= 3;
    printf("The operator %%= shows the moddulus as current value \n");
    printf("Current value is now: %d \n", number);
}