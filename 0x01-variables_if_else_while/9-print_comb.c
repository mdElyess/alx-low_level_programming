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
	int a;

	for (a = 0; a < 9; a++)
	{
		putchar('0' + a);
		putchar(',');
		putchar(' ');
	}
	putchar('0' + 9);
	return (0);
}
