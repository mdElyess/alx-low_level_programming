#include "main.h"

/**
 * main - prints '_putchar'
 * Return: On success 0
 */

int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
