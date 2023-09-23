#include "main.h"

/**
  * _strncat  - the main function
  *
  * @n: Function parameter
  *
  * @src: Function parameter
  *
  * @dest: Function parammeter
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int u, w;

	u = 0;
	w = 0;

	while (dest[u] != '\0')
	{
	u++;
	}
	while (w < n && src[w] != '\0')
	{
	dest[u] = src[w];
	w++;
	u++;
	}
	dest[u] = '\0';
	return (dest);
}
