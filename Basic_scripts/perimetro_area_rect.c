/*Escribe  un  programa  que  pregunte  al  usuario  los  dos  lados  
de  un  rectángulo  y presente por pantalla el cálculo del perímetro
(suma de los lados)  y el área (base por altura).*/

#include <stdio.h>

float   ft_area(float base, float altura)
{
    float   perimetro;
    float   area;

    perimetro = 2 * base + 2 * altura;
    area = base * altura;

    printf("La base mide: %f cm\n", base);
    printf("La altura mide: %f cm\n", altura);
    printf("El perímetro es: %f cm\n", perimetro);
    printf("El área es: %f cm cuadrados\n", area);
    return (0);
}

void    main()
{
    float   base;
    float   altura;

    base = 5;
    altura = 7;
    ft_area(base, altura);
}