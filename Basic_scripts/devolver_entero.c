/*Escribe un programa que pida un número entero, y conteste al usuario: 
“Has introducido el numero (x), gracias”. */
/*Apuntes Cartagena99*/

#include <stdio.h>
int main()
{
    int x;

    printf("Introduce un número entero");
    scanf("%d", &x);
    printf("Has introducido el numero %d, gracias", &x);
    return (0);
}