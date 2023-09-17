#include "main.h"

/**
 * This is the function that prints numbers from 0 to 9.
 *
 * Return: 0
 */
void print_numbers(void)
{
char c;

for (c = 0; c < 10; c++)
{
_putchar(c + '0');
}
_putchar('\n');
}
