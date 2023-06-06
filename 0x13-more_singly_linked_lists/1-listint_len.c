#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: points to the first element of the list
 *
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)

{
	size_t a;

	for (a = 0; h;)

	a++;
	h = h->next;

	return (a);
}
