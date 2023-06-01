#include "lists.h"

/**
 * add_node_end - adds new node at end of list_t
 * @head: head
 * @str: string to be added
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int a = 0;
	list_t *Nnode, *b;

	while (str[a])
		a++;
	Nnode = malloc(sizeof(list_t));
	
	if (Nnode == NULL)
	
		return (NULL);
		
	Nnode->str = strdup(str);
	Nnode->len = a;
	Nnode->next = NULL;
	
	if (strdup(str) == NULL)
	{
		free(Nnode);
		
		return (NULL);
	}
	
	if (*head == NULL)
	{
		*head = Nnode;
		return (Nnode);
	}
	
	else
	{
		b = *head;
		while (b->next != NULL)
			b = b->next;
		b->next = Nnode;
		
		return (Nnode);
	}
}
