#include "main.h"

/**
 * _islower - check if c in lower case or not
 *
 * @c: the charactere to check
 *
 * Return: 1 if true.
 **/

int _islower(int c)
{
	if ((c >= 97) && (c <= 'z'))
		return (1);
	return (0);
}
