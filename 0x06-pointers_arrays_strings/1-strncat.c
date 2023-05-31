#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: the result of the concatenation in dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int len_dest, count;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
		;
	for (count = 0; count < n; count++)
		dest[len_dest + count] = src[count];
	dest[len_dest + n] = '\0';
	return (dest);
}
