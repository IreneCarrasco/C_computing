/*Calcular el área de un cuadrado*/

#include <stdio.h>
#include <math.h>

float   power(float num)
{
    float   result;

    result = num * num;
    return (result);
}

float   main(void)
{
    float   respuesta;
    float   num;

    num = 7;
    respuesta = power(num);
    printf("El cuadrado de %f es: %f \n", num, respuesta);
}