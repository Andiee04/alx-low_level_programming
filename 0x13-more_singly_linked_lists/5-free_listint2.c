#include "lists.h"

/**
 * free_listint2 -  frees a linked list, and sets head to NULL
 * @head: linked list
 */

void free_listint2(listint_t **head)

{
	listint_t *Tnode, *Cnode;

	if (head == NULL)
		return;

	Cnode = *head;

	while (Cnode != NULL)

	{
		Tnode = Cnode;
		Cnode = Cnode->next;
		free(Tnode);
	}

	*head = NULL;
}
