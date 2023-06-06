#include "lists.h"

/**
 * print_listint_safe - prints listint_t linked list.
 * @head: pointer to head pointer of linked list
 * Return: address of node where loop starts/returns
 */
size_t print_listint_safe(const listint_t *head)
{
	
	size_t Ncount = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		Ncount += 1;

		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (Ncount);
}
