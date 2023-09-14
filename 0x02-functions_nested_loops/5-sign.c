#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 *
 * Return: 1 and prints + if n is greater than zero
 *         0 and prints 0 if n is zero
 *        -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+'); /* Print + for positive numbers */
return (1);
}
else if (n == 0)
{
_putchar('0'); /* Print 0 for zero */
return (0);
}
else if (n < 0)
{
_putchar('-'); /* Print - for negative numbers */
return (-1);
}

/* Handle all cases (positive, zero, negative) */
return (0);
}
