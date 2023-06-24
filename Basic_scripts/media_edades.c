/*Calcular la edad media de tres personas*/

#include <stdio.h>
#include <math.h>

float   main(void)
{
    int num1;
    int num2;
    int num3;
    float media;

    printf("Edad de la primera persona: ");
    scanf("%d", num1);
    printf("Edad de la segunda persona: ");
    scanf("%d", num2);
    printf("Edad de la tercera persona: ");
    scanf("%d", num3);
    media = (num1 + num2 + num3)/3;
    printf("La edad media de las tres personas es: %f", media);
}


