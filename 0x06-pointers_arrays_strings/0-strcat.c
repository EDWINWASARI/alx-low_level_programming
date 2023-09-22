#include "main.h"

/**
  *_strcat - main function of the prototype
  *
  * @src: Concatenation parameter
  *
  * @dest: Concatenation parameter
  *
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
int w = 0, q = 0;
while (dest[w] != '\0')
{
w++;
}

while (src[q] != '\0')
{
dest[w] = src[q];
w++;
q++;
}
dest[w] = '\0';
return (dest);
}
