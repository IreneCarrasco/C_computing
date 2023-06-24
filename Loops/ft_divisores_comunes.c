/*Realizar un programa que pida dos números y diga sus divisores comunes. */

#include <stdio.h>
int ft_divisores_comunes(int a, int b)
{
    int i;

    i = 1;
    printf("Divisores comunes de %d y %d:\n", a, b);
    if (a < b)
    {
        while(i <= b)
        {
            if (a % i == 0 && b % i == 0)
                printf("%d\n", i);
            i++;
        }
    }
        if (b < a)
    {
        while(i <= a)
        {
            if (a % i == 0 && b % i == 0)
                printf("%d\n", i);
            i++;
        }
    }
    return (0);
}

void    main()
{
    int a;
    int b;

    a = 30;
    b = 45;
    ft_divisores_comunes(a, b);
}