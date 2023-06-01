#include "lists.h"

/**
 * list_len - prints length of list_t list
 * @h: linked list input
 * Return: Num of element present
 */

size_t list_len(const list_t *h)
{
	int a;

	for (a = 0; h; a++)
		h = h->next;
	return (a);
}
