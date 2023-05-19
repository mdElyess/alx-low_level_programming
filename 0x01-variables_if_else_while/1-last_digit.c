#include <stdlib.h>
#include <time.h>
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
	int n, u;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	u = n % 10;
	printf("Last digit of %d is %d and is ", n, u);
	if (u > 5)
	{
		printf("greater than 5");
	} else if (u == 0)
	{
		printf("0");
	} else if (u < 6)
	{
		printf("less than 6 and not 0");
	}
	printf("\n");
	/* your code goes there */
	return (0);
}
