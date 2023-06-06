#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the list
 * @index: place to insert node
 * @n: value of the inserted node
 * Return: pointer to head of list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *Tnode, *Nnode;

	if (head == NULL)
	
		return (NULL);

	Tnode = *head;
	
	while (Tnode != NULL && count != idx - 1)
	{
		Tnode = Tnode->next;
		count++;
	}

	if (count != idx - 1 && idx != 0)
	
		return (NULL);

	Nnode = malloc(sizeof(listint_t));
	
	if (Nnode == NULL)
	
		return (NULL);
		
	Nnode->n = n;
	
	if (idx != 0)
	{
		Nnode->next = Tnode->next;
		Tnode->next = Nnode;
	}
	
	else
	{
		Nnode->next = *head;
		*head = Nnode;
	}
	
	return (Nnode);
}
