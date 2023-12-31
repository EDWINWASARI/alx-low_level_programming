#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int l, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (l = 0; min <= max; l++)
		ptr[l] = min++;
	return (ptr);
}
