#include "main.h"

/**
 * swap_int-swaps the values of two integers
 * Description-This is the fuction that does the above
 * @a:the first value
 * @b:the second value
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
