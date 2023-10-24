#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
int edu = 0;
listint_t *temp;

if (head == NULL || *head == NULL)
return (0);
edu = (*head)->n;
temp = *head;
*head = (*head)->next;
free(temp);
return (edu);
}
