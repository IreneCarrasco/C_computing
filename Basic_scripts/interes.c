/*Ejemplo 1.19 página 59 de  Programación estructurada en C*/
/*Calculamos el interés acumulado durante varios años de una*/
/*cantidad de dinero invertida*/

#include <stdio.h>
#include <math.h>
float   main(void)
{
    float   cantidad;
    float   interes;
    float   years;
    float   total;

    cantidad = 100;
    interes = 1.5;
    years = 5;
    printf("Cantidad de dinero a invertir: %f \n", cantidad);
    /*scanf("%f", &cantidad);*/
    printf("Tasa de interés anual: %f \n", interes);
    /*scanf("%f", &interes);*/
    printf("Tiempo en años: %f \n", years);
    /*scanf("%f", &years);*/
    printf("\n");
    interes /= 100;
    total = cantidad * pow((1 + interes), years);
    printf("Cantidad total acumulada: %f \n", total);
}