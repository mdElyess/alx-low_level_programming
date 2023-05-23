#include "main.h"

/**
 * print_times_table - prints the n times table
 **/

void print_times_table(int n)
{
	int a, b, r;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
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
					_putchar(' ');
					_putchar('0' + r);
				}
				else if (r >= 10 && r < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (r / 10));
					_putchar('0' + (r % 10));
				}
				else if (r >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (r / 100));
					_putchar('0' + ((r % 100) / 10));
					_putchar('0' + (r % 10));
				}
			}
			_putchar('\n');
		}
	}
}
