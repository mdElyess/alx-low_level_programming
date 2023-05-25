#include <stdio.h>

/**
 * main - prints all numbers from 1 to 100 Fizz on mul 3 and Buzz on mul 5
 * Return: Always 0
 */

int main(void)
{
	int i;

	printf("1")
	for (i = 2; i <= 100; i++)
		if (i % 3 == 0 && i % 5 != 0)
			printf(" Fizz");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf(" %d", i);
	printf("\n");
	return (0);
}
