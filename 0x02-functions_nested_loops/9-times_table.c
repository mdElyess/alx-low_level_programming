#include "main.h"

/**
 * times_table - prints the 9 times table
 **/

void times_table(void)
{
	int a, b, r;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b == 0)
			{
				_putchar('0');
				continue;
			}
			r = a * b;
			if (r < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + r);
			}
			else if (r >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (r / 10));
				_putchar('0' + (r % 10));
			}
		}
		_putchar('\n');
	}
}
