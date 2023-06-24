/*Realizar un programa que pida un número y diga todos sus divisores.*/
#include <stdio.h>

int ft_divisores(int a)
{
    int i;

    i = 1;
    printf("Divisores del número %d:\n", a);
    while (i <= a)
    {
        if (a % i == 0)
            printf("%d\n", i);
        i++;
    }
    return (0);
}

void    main()
{
    int a;
    a = 30;
    ft_divisores(a);
}