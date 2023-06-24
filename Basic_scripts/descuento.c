/*Escribe un programa que pregunte el precio, 
el tanto por ciento de descuento, y te diga el precio con descuento.*/

#include <stdio.h>

float ft_precio(float precio, float descuento)
{
    float   total;

	total = precio - (precio*descuento)/100;
    printf("El precio original es: %f\n", precio);
	printf("Descuento sobre el precio original: %f\n", descuento);
	printf("El precio final es: %f\n", total);
    return (0);
}

void	main()
{
    float   precio;
    float   descuento;

    precio = 100;
    descuento = 20;
	ft_precio(precio, descuento);
}