#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0
 **/

int main(void)
{
	int i, nb1, nb2, aux;

	nb1 = 0;
	nb2 = 1;
	for (i = 0; i < 49; i++)
	{
		if (i == 0)
			printf("0, ");
		if (i == 1)
			printf("1, ");
		else
		{
			aux = nb2;
			nb2 += nb1;
			nb1 = aux;
			printf("%d, ", nb2);
		}
	}
	aux = nb2;
	nb2 += nb1;
	printf("%d\n", nb2);
	return (0);
}
