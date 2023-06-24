/*Realizar un programa que imprima por pantalla tántos asteriscos como diga 
el usuario. Al ejecutarse debe preguntar “Cuantos asteriscos desea imprimir?”,
leer el número que introduce el usuario e imprimir los asteriscos. */

#include <stdio.h>

int ft_asterisco(int total)
{
    int count;

    for (count = 0; count <= total; count++)
        printf("*");
    printf("Número total de asteriscos: %d\n", total);
    return (0);
}

void    main()
{
    int total;

    total = 7;
    ft_asterisco(total);
}