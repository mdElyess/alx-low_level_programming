#include <stdio.h>
#include <stdlib.h>


/**
 * main - a program that  multiplies two numbers.
 * @argc: argument counter
 * @argv: numbers to multiply
 * Return: 0 on success, 1 if twoo arguments not given
 */

int main(int argc, char *argv[])
{

	/* validate input */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* multiply two arguments passed via cmd line */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
