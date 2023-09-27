#include "main.h"

/**
 * _puts_recursion - To be used to print a string followed by new line.
 * @s: Another parameter which is a pointer to the string.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar ('\n');
}
else
{
_putchar (*s);
_puts_recursion(s + 1);
}
}
