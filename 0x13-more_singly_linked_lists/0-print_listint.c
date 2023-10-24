#include "lists.h"

/**
 * print_listint - print the int in as singly linked list.
 *
 * @h: A pointer to the head of the list.
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
size_t add;
if (h == NULL)
return (0);
for (add = 0; h != NULL; add++)
{
printf("%d\n", h->n);
h = h->next;
}
return (add);
}
