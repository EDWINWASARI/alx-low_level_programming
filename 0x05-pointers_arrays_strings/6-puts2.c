#include "main.h"

/**
 * puts2 - prints evey other character of a string
 * @str: input string
 * Return: no return.
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\n' && str[i] != '\0')
{
_putchar (str[i]);
i += 2;
}
}
