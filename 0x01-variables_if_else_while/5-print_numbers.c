#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers from 0 to 9 followed by a newline.
 * All code is within the main function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	printf("\n");

	return (0);
}
