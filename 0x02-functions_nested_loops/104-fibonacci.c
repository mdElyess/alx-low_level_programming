#include <stdio.h>

/**
 * main - prints the sum of even-valued terms
 * Return: Always 0
 **/

int main(void)
{
	unsigned long long int i, nb1, nb2, aux;

	nb1 = 0;
	nb2 = 1;
	for (i = 0; i < 97; i++)
	{
		aux = nb2;
		nb2 += nb1;
		nb1 = aux;
		printf("%lu, ", nb2);
	}
	aux = nb2;
	nb2 += nb1;
	printf("%lu\n", nb2);
	return (0);
}
