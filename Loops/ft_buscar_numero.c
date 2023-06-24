/*Buscar un número en un array e indicar en qué posición se encuentra*/

#include <stdio.h>

void ft_buscar_numero(int *vec, int size, int numero)
{
    for (int i = 0; i < size; i++)
    {
        if (vec[i] == numero)
        {
            printf("El número %d se encuentra en la posición %d.\n", numero, i);
            return;
        }
    }
    printf("El número %d no se encuentra en el vector.\n", numero);
}

int main()
{
    int vec[] = {1, 3, 7, 5, 8};
    int n = 7;
    ft_buscar_numero(vec, sizeof(vec) / sizeof(vec[0]), n);
    return 0;
}