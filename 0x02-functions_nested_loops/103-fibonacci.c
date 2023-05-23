#include <stdio.h>

/**
 * main - prints the sum of even-valued terms
 * Return: Always 0
 **/

int main(void)
{
	int i, nb1, nb2, aux, sum;

	nb1 = 1;
	nb2 = 2;
	sum = 0;
	for (i = 1; i < 40; i++)
	{
		if (nb2 < 4000000)
		{
			if (nb2 % 2 == 0)
				sum += nb2;
			aux = nb2;
			nb2 += nb1;
			nb1 = aux;
		}
	}
	printf("%d\n", sum);
	return (0);
}
