#include "lists.h"

/**
 * pop_listint - pops off the head of the list and returns its contents
 * @head: head of the list
 * Return: contents of head
 */

int pop_listint(listint_t **head)

{
	int a;
	listint_t *Tnode;

	if (*head == NULL)
		return (0);

	Tnode = *head;

	a = Tnode->n;

	*head = Tnode->next; 
	free(Tnode);

	return (a);

}
