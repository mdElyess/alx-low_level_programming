#include "main.h"

/**
 * _isdigit - Checks if c is a digit or not
 * @c: given integer
 * Return: 1 if c is a digit ,0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
