#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - add 2 numbers
 *
 * @n: start point
 */

void print_to_98(int n)
{
	int step, i;

	if (n < 98)
		step = 1;
	else if (n > 98)
		step = -1;
	else
		step = 0;

	for (i = n; i != 98; i = i + step)
	{
		printf("%d, ", i);
	}
	printf("%d\n", 98);
}
