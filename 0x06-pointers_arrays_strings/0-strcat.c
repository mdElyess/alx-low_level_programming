#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: first string
 * @src: second string
 * Return: the result of the concatenation in dest
 */


char *_strcat(char *dest, char *src)
{
	int len_dest, len_src;

	len_dest = len_src = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	while (src[len_src] != '\0')
	{
		dest[len_dest] = src[len_src];
		len_dest++;
		len_src++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
