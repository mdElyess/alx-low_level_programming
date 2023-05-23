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
	_putchar('0' + (n % 10));
	return (0);
}
