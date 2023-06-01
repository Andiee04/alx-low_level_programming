#include "lists.h"

/**
 * print_list - prints available elements of a list_t list
 * @h: S-linked list to print
 * Return: nodes count
 */

size_t print_list(const list_t *h)
{
	size_t nodeC = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
			
		else
		
			printf("[%d] %s\n", h->len, h->str);
			
		nodeC++;
		h = h->next;
	}
	
	return (nodeC);
}
