#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums a variable number of integers
 * @n: The number of integers to be summed
 * @...: The integers to be summed
 *
 * Return: sum or if n is 0 return 0
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list edu;
va_start(edu, n);
for (i = 0; i < n; i++)
sum += va_arg(edu, int);
va_end(edu);
return (sum);
}
