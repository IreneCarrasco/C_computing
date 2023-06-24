/*Imprimir la serie de Fibonacci hasta un límite definido*/

#include <stdio.h>
int ft_fibonacci(int N)
{
    int i;
    int count;
	int	count1;
    int count2;

    i = 1;
    count = 0;
	count1 = 1;
    count2 = 1;
    printf("%d\n", count1);
    printf("%d\n", count2);
    while (i <= N)
	{
        count = count1 + count2;
        count1 = count2;
        count2 = count;
        printf("%d\n", count);
		i++;
	}
	return (0);
}

void	main()
{
	int	N;
	N = 20;
	ft_fibonacci(N);
}