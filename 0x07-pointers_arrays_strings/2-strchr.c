#include "main.h"

/**
  * _strchr - main function
  *
  * @s: The pointer to input a string to search
  *
  * @c: The character to locate in a string
  *
  * Return: Always o.
  */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
