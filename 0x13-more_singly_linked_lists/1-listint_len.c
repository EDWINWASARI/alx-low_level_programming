#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked list.
 * @h: A pointer to the head of the list.
 * Return: The number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
size_t add = 0;

if (h == NULL)
return (0);
for (add = 0; h != NULL; add++)
{
h = h->next;
}
return (add);
}
