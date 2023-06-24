/*Solución de la ecuación de segundo grado.*/

#include <stdio.h>
#include <math.h>

float   ft_segundo_grado(int a, int b, int c)
{
    float   discriminante;
    float   solucion1;
	float	solucion2;

    discriminante = b * b - 4 * a * c;
	if (discriminante < 0)
		printf("La ecuación no tiene solución real");
	if (discriminante == 0)
	{
		solucion1 = -b / (2 * a);
		solucion2 = b / (2 * a);
		printf("Solución doble: %f, %f\n", solucion1, solucion2);
	}
	if (discriminante > 0)
	{
		solucion1 = (-b + sqrt(discriminante)) / (2 * a);
		solucion2 = (-b - sqrt(discriminante)) / (2 * a);
		printf("Solución: %f, %f\n", solucion1, solucion2);
	}
	return (0);
}

void	main()
{
	int	a;
	int	b;
	int	c;

	a = 2;
	b = 8;
	c = 3;
	ft_segundo_grado(a, b, c);
}