#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	*(p - 2 + 4) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}