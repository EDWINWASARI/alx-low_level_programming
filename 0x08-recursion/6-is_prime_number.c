#include "main.h"

/**
 * is_divisible_number - Checks if a number is divisible by another number.
 * @n: The number to check for divisibility.
 * @x: The divisor to check.
 *
 * Return: 1 if n is divisible by x, otherwise 0.
 */
int is_divisible_number(int n, int x)
{
if (n < x * x)
return (1);
if (n % x == 0)
return (0);
return (is_divisible_number(n, x + 1));
}
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_divisible_number(n, n + 1));
}
