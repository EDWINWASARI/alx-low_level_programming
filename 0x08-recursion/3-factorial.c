#include "main.h"

/**
 * factorial - Calculates the factorial of a non-negative integer.
 * @n: The number for which factorial is calculated.
 *
 * Return: The factorial of n. If n is negative, returns -1.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
