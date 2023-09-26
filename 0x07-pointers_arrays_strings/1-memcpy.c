#include "main.h"

/**
  * _memcpy - main function prototype
  *
  * @src: Source parameter
  *
  * @dest: Destination parameter
  *
  * @n: Function parameter
  *
  * Return: Copied memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
	dest[l] = src[l];
	}
	return (dest);
}
