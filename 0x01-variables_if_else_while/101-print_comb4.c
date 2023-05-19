#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int a, b, c;

	for (a = '0'; a < '8'; a++)
	{
		for (b = a + 1; b < '9'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{

				putchar(a);
				putchar(b);
				putchar(c);
				if ((a != '7') || (b != '8') || (c != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
