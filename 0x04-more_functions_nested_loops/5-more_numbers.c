#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 * Return: return the result
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 14; i++)
		{
			if (i / 10 != 0)
				_putchar('1');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
