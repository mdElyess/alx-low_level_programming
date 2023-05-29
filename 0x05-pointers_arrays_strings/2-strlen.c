#include "main.h"

/**
 * swap_int - returns the length of a string.
 * @s: given String
 */

int _strlen(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}
