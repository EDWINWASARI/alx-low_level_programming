#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (correct_sqrt(n, 0));
}
/**
 * correct_sqrt - A helper function to calculate the square root recursively
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @e: iterator
 *
 * Return: the resulting square root
 */
int correct_sqrt(int n, int e)
{
if (e * e == n)
return (e);
if (e * e > n)
return (-1);
return (correct_sqrt(n, e + 1));
}
