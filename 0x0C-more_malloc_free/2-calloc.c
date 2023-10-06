#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char for copying
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
	s[l] = b;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @class: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int class, unsigned int size)
{
	char *ptr;

	if (class == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * class);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, class * size);
	return (ptr);
}

