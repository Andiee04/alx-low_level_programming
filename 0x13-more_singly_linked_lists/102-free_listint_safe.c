#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodeCount = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (nodeCount);

	current = *h;

	while (current != NULL)
	{
		next = current->next;

		/* Free the current node */
		free(current);
		nodeCount++;

		/* Break the loop if we encounter a previously visited node */
		if (next <= current)
			break;

		current = next;
	}

	*h = NULL; /* Set the head pointer to NULL */

	return (nodeCount);
}

