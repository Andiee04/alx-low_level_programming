#include "lists.h"

/**
 * _strlen - find length string count 
 * @str: string
 * Return: length count
 */

int _strlen(const char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
		;
	return (count);
}

/**
 * add_node - adds a node
 * @head: linked list
 * @str: string to add to the new node
 * Return: points an address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *Nnode;

	if (str == NULL)
		return (NULL);

	Nnode = (list_t *)malloc(sizeof(list_t));
	
	if (Nnode == NULL)
		return (NULL);

	Nnode->str = strdup(str);
	
	if (Nnode->str == NULL)
	{
		free(Nnode);
		
		return (NULL);
	}
	
	Nnode->len = _strlen(Nnode->str);
	Nnode->next = *head;
	*head = Nnode;
	
	return (Nnode);
}
