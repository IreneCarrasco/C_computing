/****************************************************************/
/* Objetivo: Hallar el factorial de un número.                  */ 
/* Entrada : Un unsigned (no existe el factorial de negativos). */ 
/* Salida : Un long double, como su factorial.                  */
/****************************************************************/
#include <stdio.h> 

int ft_factorial(unsigned int N)
{
	int factorial = 1; // Inicializamos el factorial como 1
	int i;

	for (i = 1; i <= N; i++)
	{
		factorial = factorial * i;
	}

	printf("\n- Factorial: %u! = %d\n", N, factorial);
}

int main()
{
	unsigned int num;

	num = 5;
	ft_factorial(num);

	return 0;
}
