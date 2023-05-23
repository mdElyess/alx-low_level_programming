#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0
 **/

int main(void)
{
	long int i, nb1, nb2, aux;

	nb1 = 0;
	nb2 = 1;
	for (i = 0; i < 50; i++)
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
			printf("%ld, ", nb2);
		}
	}
	aux = nb2;
	nb2 += nb1;
	printf("%ld\n", nb2);
	return (0);
}
