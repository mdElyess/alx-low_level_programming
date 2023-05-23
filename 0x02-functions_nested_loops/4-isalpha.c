#include "main.h"

/**
 * _isalpha - check if c is an alphabet
 *
 * @c: the charactere to check
 *
 * Return: 1 if true and 0 if false
 **/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
