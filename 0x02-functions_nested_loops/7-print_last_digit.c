#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: integer argument
 *
 * Return: 0 Success
 **/

int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n = -n;
	r = n % 10;
	_putchar('0' + r);
	return (r);
}
