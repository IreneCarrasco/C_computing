/*Ejemplo 6.8 página 170 Schaum*/
/*Escribir los números de 0 a 9*/

#include <stdio.h>

int main(int num)
{
    num = 0;
    printf("Print numbers from 0 to 9 in a single line:\n");
    while (num <= 9)
    {
        printf("%d", num);
        num++;
    }
    printf("\n");
    num = 0;/*Tengo que poner de nuevo esta línea porque con el bucle
    pasa a valer 9 y no me haría el bucle de abajo*/
    printf("Print numbers from 0 to 9 in a new line:\n");
    while (num <= 9)
    {
        printf("%d\n", num);
        num++;
    }
}