#include "main.h"

/**
 * print_triangle - prints a triangle with # and ' '
 * @size: size of the square
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j > 0; j++)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
	}
}
