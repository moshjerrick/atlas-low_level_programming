#include "lists.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
