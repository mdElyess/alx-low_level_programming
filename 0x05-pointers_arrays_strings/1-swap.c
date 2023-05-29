#include "main.h"

/**
 * swap_int - swap the value of 2 ints
 * @a: first pointer
 * @b: second pointer
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
