#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int a;

	for (a = 97; a < 'z' + 1; a++)
	{
		putchar(a);
	}
	for (a = 'A'; a < 'Z' + 1; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
