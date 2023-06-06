#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer to the start of the list
 * Return: result
 */


size_t free_listint_safe(listint_t **h)
{
	size_t a = 0;
	listint_t *Linkh, *Tnode;
	long dif;

	if (!h)
		return (0);
	Linkh = *h;
	*h = NULL;
	while (Linkh)
	{
		a++;
		dif = Linkh->next - Linkh;
		Tnode = Linkh;
		free(Tnode);
		if (dif >= 0)
			break;
		Linkh = Linkh->next;
	}
	return (a);
}
