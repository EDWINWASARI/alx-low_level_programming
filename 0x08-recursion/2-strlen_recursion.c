#include "main.h"

/**
 * _strlen_recursion - Returns the length of the string
 * @s: A pointer to the string to find the length of
 *
 * Description: This function returns the length of the string.
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
