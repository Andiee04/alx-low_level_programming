#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: (prev) Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (prev);
}
