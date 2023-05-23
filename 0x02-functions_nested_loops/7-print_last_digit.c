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

	r = n % 10;
	if (r < 0)
		r = -r;
	_putchar('0' + r);
	return (r);
}
