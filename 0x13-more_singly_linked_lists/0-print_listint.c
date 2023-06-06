#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t
 * @h: list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)

{
    size_t a;
    
   for (a = 0; h;)

    {
        printf("%d\n", h->n);
	a++;	
	h = h->next;
    }
    
    return (a);
}
