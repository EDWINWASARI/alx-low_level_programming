#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
int len = strlen(s);
int middle = len / 2;
char temp;
int i;
i = 0;
while (i < middle)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
i++;
}
}
