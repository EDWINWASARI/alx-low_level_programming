#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *pic;
int y, b = 0;
if (str == NULL)
return (NULL);
y = 0;
while (str[y] != '\0')
y++;
pic = malloc(sizeof(char) * (y + 1));
if (pic == NULL)
return (NULL);
for (b = 0; str[b]; b++)
pic[y] = str[b];
return (pic);
}
