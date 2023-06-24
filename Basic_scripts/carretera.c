/****************************************************************/
/* Objetivo: Control del consumo de gasolina y velocidad media. */
/* Entrada : Km. recorridos. Precio gasolina, dinero gastado y */
/* Tiempo empleado en el viaje.                                */
/* Salida : Consumo de gasolina cada km. y cada 100 km., y     */
/* Velocidad media en el viaje.                                */
/****************************************************************/

#include <stdio.h>

void    carretera(float distance, float fuel_price, float money, float time)
{
	float	fuel_1km;
	float	fuel_100km;
	float	speed;
	int		minutes;

	minutes = time * 60;
	speed = distance / time;
	fuel_1km = money / distance;
	fuel_100km = fuel_1km * 100;

	printf("Time spent in minutes: %i\n", minutes);
	printf("Average speed in km/h: %5.3f\n", speed);
	printf("Fuel spent per km: %5.3f\n", fuel_1km);
	printf("Fuel spent per 100 km: %5.3f\n", fuel_100km);
}

float	main(void)
{
	float	distance;
	float	fuel_price;
	float	money;
	float	time;

	distance = 195;
	fuel_price = 1.54;
	money = 55;
	time = 1.5;
	carretera(distance, fuel_price, money, time);
}