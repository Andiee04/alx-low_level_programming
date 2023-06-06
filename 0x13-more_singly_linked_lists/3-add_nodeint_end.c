#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a list
* @head: current node
* @n: add to
* Return: points current position
*/

listint_t *add_nodeint_end(listint_t **head, const int n)

{
listint_t *Nnode, *Cnode;

Nnode = malloc(sizeof(listint_t));

if (Nnode == NULL)
return (NULL);

Nnode->n = n;
Nnode->next = NULL;

if (*head == NULL)
{
*head = Nnode;
return (*head);
}

Cnode = *head;

while (Cnode->next != NULL)

Cnode = Cnode->next;
Cnode->next = Nnode;

return (*head);
}
