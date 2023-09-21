#include "main.h"

/**
 *puts_half - function that prints half of a string, followed by a new line.
 *
 *@str: This is the input string
 */
void puts_half(char *str)
{
	int v, man;

	v = 0;
	while (str[v] != '\0')
		v++;

	man = v / 2;

	if (v % 2 == 1)
		v++;

	while (v < man)
	{
		_putchar(str[man]);
		v++;
	}
	_putchar('\n');
}
