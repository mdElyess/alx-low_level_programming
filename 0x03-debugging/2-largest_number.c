#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a <= b)
		largest = b;
	else
		largest = a;
	if (largest <= c)
		largest = c;
	return (largest);
}
