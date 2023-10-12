#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - Print numbers with a separator and a newline
 * @separator: The string to be printed between numbers (can be NULL)
 * @n: The number of integers to be printed
 * @...: Variable number of integer arguments
 * Description: This function prints a series of integers followed by the
 * separator string (if not NULL), and then a newline character.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int sum;
va_list nums;
va_start(nums, n);
for (sum = 0; sum < n; sum++)
{
printf("%d", va_arg(nums, int));
if (sum != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(nums);
printf("\n");
}
