#include "main.h"

/**
 * _isupper - Checks if c is uppercase
 * @c: given character
 * Return: 1 if c is uppercase ,0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
