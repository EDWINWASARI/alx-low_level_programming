#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
int length = strlen(s);
int middle = length / 2;
char temp;
int i;
for (i = 0; i < middle; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
for (i = 0; i < length; i++)
{
_putchar (s[length]);
}
_putchar ('\n');
}
