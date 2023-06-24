/*Escribe un programa que pida al usuario los siguientes datos: días, 
horas y minutos. Y le conteste con la cantidad de segundos totales que 
son esos datos.*/

#include <stdio.h>

int ft_segundos(int dias, int horas, int minutos)
{
    int segundos;
    
    segundos = dias * 86400 + horas * 3600 + minutos *60;
    printf("Numero de días: %d\n", dias);
    printf("Numero de horas: %d\n", horas);
    printf("Numero de minutos: %d\n", minutos);
    printf("El total de segundos es: %d\n", segundos);
    return (0);
}

void    main()
{
    int dias;
    int horas;
    int minutos;

    dias = 2;
    horas = 5;
    minutos = 30;
    ft_segundos(dias, horas, minutos);
}