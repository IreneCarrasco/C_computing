/* Imprimir los números primos entre 1 y un número dado */
#include <stdio.h>

int ft_primos(int N)
{
    int i, div, num;

    // Comenzamos en 2, ya que 1 no se considera un número primo
    for (num = 2; num <= N; num++)
    {
        div = 2;
        while (div < num)
        {
            // Si num es divisible por div, no es un número primo
            if (num % div == 0)
                break;
            div++;
        }

        // Si el bucle anterior terminó sin encontrar un divisor, es un número primo
        if (div == num)
            printf("%d\n", num);
    }

    return 0;
}

int	main()
{
	int	N;
	N = 125;
	ft_primos(N);
}