/*Ejemplo 1.8 página 24 del Schaum "Programación en C"*/
/*Cálculo del área de un círculo*/
#include <stdio.h>
#include <math.h>

float   processing(float r)
{

    float   PI;

    PI = 3.141592;
    float   s;
    s = PI * r * r;
    return (s);    
}

float   main(void)
{
    float   radius;
    float   area;
 
    radius = 8.3;
    area = processing(radius);
    printf("Radius of circle: %f \n", radius);
    printf("Area of circle: %f \n", area);
}