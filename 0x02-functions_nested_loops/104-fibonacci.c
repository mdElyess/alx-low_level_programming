#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers.
 * Return: Always 0
 **/

int main(void)
{
	unsigned long int i, nb1, nb2, j1, j2, k1, k2;

	nb1 = 1;
	nb2 = 2;
	printf("%lu", nb1);
	for (i = 0; i < 91; i++)
	{
		printf(", %lu", nb2);
		nb2 += nb1;
		nb1 = nb2 - nb1;
	}
	j1 = nb1 / 1000000000;
	j2 = nb1 % 1000000000;
	k1 = nb2 / 1000000000;
	k2 = nb2 % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}
	printf("\n");
	return (0);
}
