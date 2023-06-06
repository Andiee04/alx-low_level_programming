#include "lists.h"

/**
 * find_listint_loop_pl - finds a loop in a linked list
 * @head: linked list t
 * Return: result
 */

listint_t *find_listint_loop_pl(listint_t *head)
{
	listint_t *a, *b;

	if (head == NULL)
		return (NULL);

	for (b = head->next; b != NULL; b = b->next)
	{
		if (b == b->next)
			return (b);
		for (a = head; a != b; a = a->next)
			if (a == b->next)
				return (b->next);
	}
	return (NULL);
}

/**
 * print_listint_safe - prints a linked list
 * @head: head of list
 * Return: result
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t le = 0;
	int l;
	listint_t *Lnode;

	Lnode = find_listint_loop_pl((listint_t *) head);

	for (le = 0, l = 1; (head != Lnode || l) && head != NULL; le++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == Lnode)
			l = 0;
		head = head->next;
	}

	if (Lnode != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (le);
}
