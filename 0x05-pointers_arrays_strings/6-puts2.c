#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: input string
 *
 * Description: This function prints every other character of a string,
 * starting from the first character, followed by a new line.
 *
 * Return: No return value.
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\n' && str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
}
