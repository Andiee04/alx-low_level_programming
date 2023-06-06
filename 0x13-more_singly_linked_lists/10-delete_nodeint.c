#include "lists.h"

/**
* delete_nodeint_at_index - deletes a node
* @head: linked list at head
* @index: index of deleted node
* Return: boolean
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int a;
listint_t *Cnode, *Snode;

if (!head || !*head)

return (-1);
Cnode = *head;

if (index == 0)
{
*head = (*head)->next;
free(Cnode);
return (1);
}

for (a = 0; a < (index - 1); a++)
{
Cnode = Cnode->next;

if (Cnode == NULL)

return (-1);
}

Snode = Cnode->next;
Cnode->next = Snode->next;
free(Snode);

return (1);
}
