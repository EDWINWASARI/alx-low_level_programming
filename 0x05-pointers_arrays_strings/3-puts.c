#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to be used to print the string
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\n' && str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
